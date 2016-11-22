#ifndef GRA_H
#define GRA_H
#include<vector>
#include <Rozgrywki.h>
#include <fstream>


class Gra
{
    public:
        Gra();
        virtual ~Gra();
         Rozgrywki lotto_ekstraklasa;
        void wczytaj_gre();
        bool zapisz_gre();
        void przejdz_runde();
        void wybierz_sklad();
        void wyswietl_sklad();
        void pokaz_statystyki();
        void pokaz_sklad();
        void pokaz_sile_swojego_zespolu();



    protected:

    private:
        Klub Wybrany_zespol;



};

#endif // GRA_H
