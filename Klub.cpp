#include "Klub.h"
#include<string>
#include<iostream>
#include<Pilkarz.h>

Klub::Klub()
{
    //ctor
}

Klub::~Klub()
{
    //dtor
}
Klub* Klub::wczytaj_klub(std::fstream  & pliczek)
{
getline( pliczek, nazwa_klubu );

for(int i=0;i<31;i++)
{

std::cout<<i;
Pilkarz przyklad;
przyklad.wczytaj_pilkarza(pliczek);
zawodnicykluby.push_back(przyklad);
std::cout<<przyklad.imie;

}




return this;
}
