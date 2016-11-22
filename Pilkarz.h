#ifndef PILKARZ_H
#define PILKARZ_H
#include<Osoba.h>
#include<string>
#include <fstream>


class Pilkarz:public Osoba
{



    protected:

    private:

                            enum Pozycja
                            {
                                bramkarz=1,
                                obronca=2,
                                pomocnik=3,
                                napastnik=4
                            };

                short bramki,asysty;
                Pozycja pozycja_zawodnika;


        public:
                Pilkarz();
        virtual ~Pilkarz();

                short ile_goli();
                short ile_asyst();
                Pozycja jaka_pozycja();
                short jakie_umiejetnosci();
                void wczytaj_pilkarza(std::fstream & plik);
                void zapisz_pilkarza();
                void wczytajpozycje(std::string k);
                std::string pokaz_jaka_pozycja();





};

#endif // PILKARZ_H
