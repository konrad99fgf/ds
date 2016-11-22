#ifndef OSOBA_H
#define OSOBA_H
#include<string>
#include <fstream>


class Osoba
{
    public:

                Osoba();
                virtual ~Osoba();


  //  protected:
                short wiek,umiejetnosci;
                std::string imie,nazwisko,narodowosc;
                std::string zwroc_imie_i_nazwisko();
                short jaki_wiek();
                void wczytaj_osobe();
                void zapisz_osobe();

    private:
};

#endif // OSOBA_H
