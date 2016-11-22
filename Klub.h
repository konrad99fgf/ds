#ifndef KLUB_H
#define KLUB_H
#include<string>
#include<Pilkarz.h>
#include<list>
#include <fstream>

class Klub
{
    public:
        Klub();
        virtual ~Klub();
        std::string jaki_klub();
        std::string jaki_menedzer();
        void wczytaj_zawodnikow();
        long jaki_budzet();
        long jakie_place();
        long ile_na_transfery();
        double jaka_sila_druzyny();
        Klub* wczytaj_klub(std::fstream  & pliczek );
        void zapisz_klub();
        std::string jaka_nazwa_klubu();
        void pokaz_sklad();


   protected:

    private:
        std::string nazwa_klubu,nazwa_menedzera;
        std::list<Pilkarz> zawodnicykluby;
        int budzet,place,natransfery;



};

#endif // KLUB_H
