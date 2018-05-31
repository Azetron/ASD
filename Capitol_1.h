#ifndef CAPITOL_1_H
#define CAPITOL_1_H
#include <iostream>
using namespace std;

class Capitol_1
{
    public:
        Capitol_1();
        virtual ~Capitol_1();
<<<<<<< HEAD

    void creare_lista();
    void afisare_lista();
=======
    void creare_lista();
    void afisare_lista();
    void legatura();
>>>>>>> 9aa2b20c4dc9338173157cb14b9dad0136dc6987
    void lupta();
    void damage(int &i);
    void regenerare(int &i);
    void damageNPC(int &i);
<<<<<<< HEAD
    void link(int n2,int n1, char iesire);
    void legaturi();
    void interact();

    int playerAction;
    int NPC_HP=100;
    int HP_J=100;

    protected:

    private:
        struct Nod *prim, *ultim;
=======
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
>>>>>>> 9aa2b20c4dc9338173157cb14b9dad0136dc6987
};

#endif // CAPITOL_1_H

//back date A B C
