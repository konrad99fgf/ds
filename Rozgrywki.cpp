#include "Rozgrywki.h"
#include <iostream>
#include <fstream>
#include <string>

Rozgrywki::Rozgrywki()
{
    //ctor
}

Rozgrywki::~Rozgrywki()
{
    //dtor
}
void Rozgrywki::wczytaj_rozgrywki()
 {
     std::fstream plik;
plik.open( "FMK.txt", std::ios::in  );
if( plik.good() == true )
{
    std::cout << "Uzyskano dostep do pliku!" << std::endl;
    //tu operacje na pliku
} else std::cout << "Dostep do pliku zostal zabroniony!" << std::endl;
    for(int i=0;i<17;i++)
    {


     Klub klub_do_wczytania;
     klub_do_wczytania.wczytaj_klub(plik);
     kluby_z_ligi.push_back(klub_do_wczytania);

    }



     plik.close();


 }
