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
    void legatura();
    void lupta();
    void damage(int &i);
    void regenerare(int &i);
    void damageNPC(int &i);
    int playerAction;
    int NPC_HP=100;
    int HP_J=100;
    protected:
    private:
        struct Nod{
                string info;
                Nod *next,*backk;

        };
        Nod *prim,*ultim;
        Nod *A,*B,*C;
};

#endif // CAPITOL_1_H

//back date A B C
