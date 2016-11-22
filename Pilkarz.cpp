#include "Pilkarz.h"
#include <fstream>
#include <iostream>

Pilkarz::Pilkarz()
{
    //ctor
}

Pilkarz::~Pilkarz()
{
    //dtor
}
void Pilkarz::wczytaj_pilkarza(std::fstream & plik)
{
plik>>imie;
plik>>nazwisko>>wiek;
plik>>narodowosc;
std::string poz;
plik>>poz;
wczytajpozycje(poz);
plik>>umiejetnosci;


//std::cout<<imie<<nazwisko<<narodowosc<<umiejetnosci<<wiek<<pokaz_jaka_pozycja();

}
 void Pilkarz::wczytajpozycje(std::string k)
 {
     if(k=="Bramkarz")
     {
         pozycja_zawodnika=bramkarz;
     }
     else if(k=="Obroñca")
     {
         pozycja_zawodnika=obronca;
     }
     else if(k=="Pomocnik")
     {
         pozycja_zawodnika=pomocnik;
     }
     else
     {
         pozycja_zawodnika=napastnik;
     }
 }
  std::string Pilkarz::pokaz_jaka_pozycja()
  {
      std::string q;
      if(pozycja_zawodnika==bramkarz)
     { q="bramkarz";
         return q;

     }
     else if(pozycja_zawodnika==obronca)
     {
         q="obroñca";
         return q;
     }
     else if(pozycja_zawodnika==pomocnik)
     {
         q="pomocnik";
         return q;
     }
     else
     {
         q="napastnik";
         return q;
     }
  }
