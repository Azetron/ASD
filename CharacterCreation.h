#ifndef CHARACTERCREATION_H
#define CHARACTERCREATION_H
#include <iostream>
class CharacterCreation
{
    public:
        CharacterCreation();
        virtual ~CharacterCreation();
        char Nume[50],Gender;
        int Varsta,HP_J;
        void creareCaracter();
        void arata();
    protected:
    private:
};

#endif // CHARACTERCREATION_H
