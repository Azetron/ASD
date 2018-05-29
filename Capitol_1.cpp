#include "Capitol_1.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;



Capitol_1::Capitol_1()
{
    //ctor
}

Capitol_1::~Capitol_1()
{
    //dtor
}

ifstream F("d.txt");


void Capitol_1::creare_lista()
{

 A=new Nod;
getline(F,A->info);
 if(!prim)

   {prim=A;

    prim->next=NULL;

    prim->backk=NULL;

    ultim=prim;
    }

 else

   {ultim->next=A;
    A->backk=ultim;
    ultim=A;
    ultim->next=0;
   }


}
void Capitol_1::legatura()
{
    Nod *temp;
    A=new Nod;
    B=new Nod;
    C=new Nod;
    A=NULL;
    B=NULL;
    C=NULL;

}
void Capitol_1::afisare_lista()
{
 A=prim;

 while(A)

    {
        cout<<A->info<<" "<<endl;
        A=A->next;
     }
}
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
