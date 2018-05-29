#include <iostream>
#include "CharacterCreation.h"
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Capitol_1.h"
#include "BinaryTree.h"
using namespace std;


ifstream h("Date");
ofstream f("Achievements");
ofstream g("Rezultate");


int playerAction;
char Decizie;
int NPC_HP=100;
int NPC_HP_Tutorial=100;
CharacterCreation a;
Capitol_1 b;


int m=10;


struct Capitole
{
    char nume[20];
    Capitole *C;
};
Capitole *p,*u;
int n=3;


void creareCap()
{
    Capitole *c;
    if(!p)
    {
        p=new Capitole;
        h>>p->nume;
        u=p;
    }
    else
    {
        c=new Capitole;
        h>>c->nume;
        u->C=c;
        u=c;
    }
    u->C=0;
}
void afisare()
{
    Capitole *c;
    c=p;
    while(c)
    {
        cout<<c->nume<<" ";
        c=c->C;
    }
    cout<<endl;
    cout<<"Daca vei termina cele 3 capitole, vei castiga jocul"<<endl;
}


void damage(int &i)
{
    srand(time(NULL));
    i=i-(rand() % 15 + 5);
}
void regenerare(int &i)
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
void damageNPC(int &i)
{
    srand(time(NULL));
    i=i-(rand()%10+5);
}
void battle()
{
    while(a.HP_J>0 && NPC_HP>0)
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
            regenerare(a.HP_J);
        }
        cout<<"The NPC attacks"<<endl;
        damageNPC(a.HP_J);
        system("pause");
        system("cls");
        cout<<"You have"<<" "<<a.HP_J<<" "<<"HP left"<<endl;
        cout<<"NPC has"<<" "<<NPC_HP<<" "<<"HP left"<<endl;

    }
    if(a.HP_J<=0)
    {
        cout<<"Ai pierdut"<<endl;

    }
    if(NPC_HP<=0)
    {
        cout<<"Ai castigat"<<endl;
    }
    NPC_HP=100;
}


int main()
{
    BinaryTree guessGame;
    system("pause");
    system("cls");
    cout<<"Create your first character"<<endl;
    a.creareCaracter();
    for(int i=1;i<=n;i++)
    {
        creareCap();
    }
    a.arata();
    afisare();
    system("pause");
    system("cls");
    cout<<"Bun venit summoner"<<endl;
    system("pause");
    system("cls");
    cout<<"Pentru a te familiariza cu sistemul jocului am pregatit un tutorial"<<endl;
    system("pause");
    system("cls");
    do{
        battle();
        if(a.HP_J<=0)
        {
            cout<<"Mai incearca pana castigi "<<endl;
            a.HP_J=100;
            battle();
        }
    }while(a.HP_J<=0);
    //f<<"First Blood"<<endl;
    //f<<"Tutorial indeplinit"<<endl;
    system("pause");
    system("cls");
    for(int j=1;j<=m;j++)
    {
         b.creare_lista();
    }
    b.lupta();
    return 0;
}





