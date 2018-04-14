//In fisierul "Achievements" o sa salvam toate realizarile
//In fisierul "Rezultate" o sa salvam cum a decurs jocul(daca am castigat sau pierdut si ce realizari am facut)
#include <iostream>
#include "CharacterCreation.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

ofstream f("Achievements");
ofstream g("Rezultate");


int playerAction;
int HP_J=100;
char Decizie;
int goblinHP=100;


struct Capitole
{
    char nume[20];
    Capitole *C;
};
Capitole *p,*u;
int n=3;
<<<<<<< HEAD
=======

void creareCap()
{
    Capitole *c;
    if(!p)
    {
        p=new Capitole;
        cout<<"Primul capitol:";
        cin>>p->nume;
        u=p;
    }
    else
    {
        c=new Capitole;
        cout<<"Urmatorul:";
        cin>>c->nume;
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
>>>>>>> d8ea9516f1f1b249d44e1c79ee83635cb0726dad

void creareCap()
{
    Capitole *c;
    if(!p)
    {
        p=new Capitole;
        cout<<"Primul capitol:";
        cin>>p->nume;
        u=p;
    }
    else
    {
        c=new Capitole;
        cout<<"Urmatorul:";
        cin>>c->nume;
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
void damageGoblin(int &i)
{
    srand(time(NULL));
    i=i-(rand()%10+5);
}
void tutorial()
{
    while(HP_J>0 && goblinHP>0)
    {
        cout<<"Write 1 to attack"<<" "<<"or write 0 to regenerate"<<endl;
        cin>>playerAction;
        if(playerAction==1)
        {
            cout<<"You choose to attack"<<endl;
            damage(goblinHP);
        }
        if(playerAction==0)
        {
            cout<<"You choose to regenerate"<<endl;
            regenerare(HP_J);
        }
        cout<<"The goblin attacks"<<endl;
        damageGoblin(HP_J);
        system("cls");
        cout<<"You have"<<" "<<HP_J<<" "<<"HP left"<<endl;
        cout<<"Goblin has"<<" "<<goblinHP<<" "<<"HP left"<<endl;

    }
    if(HP_J<=0)
    {
        cout<<"Ai pierdut"<<endl;
    }
    if(goblinHP<=0)
    {
        cout<<"Tutorial indeplinit !!!!"<<endl;
        HP_J=100;
    }
}
int main()
{
    CharacterCreation a;
    a.creareCaracter();
    a.arata();
    cout<<"Bun venit summoner"<<endl;
    system("pause");
    system("cls");
    cout<<"Pentru a te familiariza cu sistemul jocului am pregatit un tutorial"<<endl;
    system("pause");
    system("cls");
    cout<<"Pentru a indeplini tutorialul trebuie sa invingi goblinul"<<endl;
    system("pause");
    system("cls");
    tutorial();
    system("pause");
    system("cls");
    cout<<"Acum ca ai invins goblinul este timpul sa intri in povestea jocului"<<endl;
    system("pause");
    system("cls");
    cout<<"Intr-un sat departe de lume traia un copil alaturi de familia lui"<<endl;
    system("pause");
    system("cls");
    cout<<"Era foarte fericit pana cand intr-o zi a venit o armata de care toata lumea se temea"<<endl;
    system("pause");
    system("cls");
    cout<<"Armata de scheleti a Regelui Schelet"<<endl;
    system("pause");
    system("cls");
    cout<<"Copilul a stiut ca ceea ce v-a urma sa vina asa ca s-a ascuns cat de bine a putut pana au plecat"<<endl;
    system("pause");
    system("cls");
    cout<<"Dupa ce armata a plecat, satul a ramas doar o ruina din ce era"<<endl;
    system("pause");
    system("cls");
    cout<<"Dar cel mai rau a fost ca parintii lui au fost ucisi"<<endl;
    system("pause");
    system("cls");
    cout<<"Dupa o zi de mers cu lacrimi in ochi copilul a intalnit un strain"<<endl;
    system("pause");
    system("cls");
    cout<<"Acesta i-a spus ca stie ce s-a intamplat cu familia lui si ii ofera o sansa"<<endl;
    system("pause");
    system("cls");
    cout<<"Sa aleaga intre moarte sigura sau sa se duca cu el pentru a putea fi antrenat in artele luptei ca intr-o buna zi sa il poata invinge pe regele schelet"<<endl;
    system("pause");
    system("cls");
    cout<<"Copilul fara ezitare a plecat cu el iar dupa 3 ani de antrenament a ajuns sa fie pregatit in al infrunta pe Regele Schelet"<<endl;
    system("pause");
    system("cls");
    cout<<"Acesta si-a luat la revedere de la el si a plecat in calatoria lui cu scopul de a-si razbuna parintii"<<endl;
    system("pause");
    system("cls");
    cout<<"Pe parcursul jocului v-a trebui sa faci decizii"<<endl;
    system("pause");
    system("cls");
    cout<<"Tine minte: decizie si consecinta"<<endl;
    system("pause");
    system("cls");
    cout<<"Jocul are 3 capitole"<<endl;
    system("pause");
    system("cls");
    for(int i=1;i<=n;i++)
    {
        creareCap();
        cout<<endl;
    }
    cout<<endl;
    afisare();
    system("pause");
    system("cls");
    return 0;
}

