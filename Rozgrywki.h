#ifndef ROZGRYWKI_H
#define ROZGRYWKI_H
#include <string>
#include <vector>
#include <Klub.h>
#include <fstream>


class Rozgrywki
{
    public:
        Rozgrywki();
        virtual ~Rozgrywki();
        void wczytaj_rozgrywki();

        void usun_zespol_gracza();
        void pokaz_nastepny_zespol_do_gry();
        void pokaz_sile_rywala();
        void usun_zespol_z_ktorym_gralem();

    protected:

    private:
        std::vector<Klub> kluby_z_ligi;
        std::string nazwa_ligi;
        std::vector<Klub>::iterator rywal;


};

#endif // ROZGRYWKI_H
