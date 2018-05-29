#include "CharacterCreation.h"
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
CharacterCreation::CharacterCreation()
{

        this->Varsta=Varsta;
        this->HP_J=100;

}
CharacterCreation::~CharacterCreation()
{
    //
}
void CharacterCreation::creareCaracter()
{
    do{
    cout<<"Nume utilizator:";
    cin>>Nume;
    }while(strlen(Nume)>10);
    do{
    cout<<"Genul utilizatorului(M sau F):";
    cin>>Gender;
    }while(Gender!='M' && Gender!='F');
    cout<<"Varsta utilizator:";
    cin>>Varsta;
    system("cls");
}
void CharacterCreation::arata()
{
    cout<<Nume<<endl<<Gender<<endl<<Varsta<<endl<<HP_J<<endl;
}
