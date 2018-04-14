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
    cout<<"Nume=";
    cin>>Nume;
    }while(strlen(Nume)>10);
    do{
    cout<<"Gender=";
    cin>>Gender;
    }while(Gender!='M' && Gender!='F');
    cout<<"Varsta=";
    cin>>Varsta;
    system("cls");
}
void CharacterCreation::arata()
{
    cout<<Nume<<endl<<Gender<<endl<<Varsta<<endl<<HP_J<<endl;
}
