#ifndef CAPITOL_1_H
#define CAPITOL_1_H
#include <iostream>
using namespace std;

class Capitol_1
{
    public:
        Capitol_1();
        virtual ~Capitol_1();

    void creare_lista();
    void afisare_lista();
    void lupta();
    void damage(int &i);
    void regenerare(int &i);
    void damageNPC(int &i);
    void link(int n2,int n1, char iesire);
    void legaturi();
    void interact();

    int playerAction;
    int NPC_HP=100;
    int HP_J=100;

    protected:

    private:
        struct Nod *prim, *ultim;
};

#endif // CAPITOL_1_H

//back date A B C
