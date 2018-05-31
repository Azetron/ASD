#include "Capitol_1.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


struct Nod{
    struct Nod *prev;
    int ID;
    string info;
    struct Nod *nextA, *nextB, *nextC;
    };

Capitol_1::Capitol_1()
{
    this->prim=NULL;
    this->ultim=NULL;
    creare_lista();
    interact();
}

Capitol_1::~Capitol_1()
{
    //dtor
}


struct Nod* create_node(string info,int ID)
{
    struct Nod * temp;
    temp= new struct Nod;
    temp->info=info;
    temp->ID=ID;

    temp->nextA=NULL;
    temp->nextB=NULL;
    temp->nextC=NULL;
    temp->prev=NULL;

    return temp;

}

void Capitol_1::link(int n2,int n1, char iesire)
{
    struct Nod *n2_p,*n1_p, *ptemp;
    ptemp=this->prim;

    for( ; ptemp != NULL ; ptemp=ptemp->nextA)
    {
        if(ptemp->ID == n1)
            n1_p=ptemp;
        if(ptemp->ID == n2)
            n2_p=ptemp;
    }

    if(iesire == 'A')
    {
        n1_p->nextA=n2_p;
    }
    else
        if(iesire == 'B')
        {
            n1_p->nextB=n2_p;
        }
        else
            if(iesire == 'C')
            {
                n1_p->nextC=n2_p;
            }

}

void Capitol_1::legaturi()
{
    ifstream h("d_legaturi.txt");

    int a,b;
    char c;

    while(h>>a)
    {
        h>>b;
        h>>c;
        link(a,b,c);
    }

}

void Capitol_1::creare_lista()
{
    ifstream F("d.txt");

    int k=0;
    while(F>>k)
    {
        string inf;
        getline(F,inf);

        if(this->ultim == NULL)
        {
            this->prim=create_node(inf,k);
            this->ultim=this->prim;
        }
        else
        {
            struct Nod* tmp;
            tmp=create_node(inf,k);

            tmp->prev=this->ultim;
            this->ultim->nextA=tmp;
            this->ultim=tmp;

        }
    }
    legaturi();

}

void Capitol_1::afisare_lista()
{
    struct Nod *th;
    th=this->prim;

    while(th != NULL)
    {
        cout<<th->ID<<' '<<th->info<<'\n';
        th=th->nextA;
    }

}
void Capitol_1::interact()
{
    struct Nod *tp;
    tp=this->prim;

    cout<<tp->info<<'\n';
    while(tp != NULL)
    {
        if(tp->nextB != NULL)
        {
            cout<<tp->info<<'\n';
            cout<<tp->nextA->info<<'\n';
            cout<<tp->nextB->info<<'\n';

            if(tp->nextC != NULL)
                cout<<tp->nextC->info;

            char c;
            cin>>c;
            if(c=='A' || c=='a')
            {
                tp=tp->nextA->nextA;
            }
            else
            if(c=='B' || c=='b')
            {
                tp=tp->nextB->nextB;
            }
            else
            if(c=='C' || c=='c')
            {
                tp=tp->nextC->nextC;
            }
        }
        else
        {
            tp=tp->nextA;
        }
    }
}
///---------------------------------------------------------------------

void Capitol_1::damage(int &i)
{
    srand(time(NULL));
    i=i-(rand() % 15 + 5);
}
void Capitol_1::regenerare(int &i)
{
    if(i>90)
    {
        i=100;
    }
    else
    {
        i=i+10;
    }
}
void Capitol_1::damageNPC(int &i)
{
    srand(time(NULL));
    i=i-(rand()%10+5);
}
void Capitol_1::lupta()
{
    while(HP_J>0 && NPC_HP>0)
    {
        cout<<"Write 1 to attack"<<" "<<"or write 0 to regenerate"<<endl;
        cin>>playerAction;
        if(playerAction==1)
        {
            cout<<"You choose to attack"<<endl;
            damage(NPC_HP);
        }
        if(playerAction==0)
        {
            cout<<"You choose to regenerate"<<endl;
            regenerare(HP_J);
        }
        cout<<"The NPC attacks"<<endl;
        damageNPC(HP_J);
        system("pause");
        system("cls");
        cout<<"You have"<<" "<<HP_J<<" "<<"HP left"<<endl;
        cout<<"NPC has"<<" "<<NPC_HP<<" "<<"HP left"<<endl;

    }
    if(HP_J<=0)
    {
        cout<<"Ai pierdut"<<endl;

    }
    if(NPC_HP<=0)
    {
        cout<<"Ai castigat"<<endl;
    }
    NPC_HP=100;
}
