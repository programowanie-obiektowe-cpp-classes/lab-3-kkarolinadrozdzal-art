#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int licznik = 0;
    int n_zaglowiec = 0;
    while (licznik < towar) {

       if (towar == 0) {
            return 0;
        }
            Stocznia stocznia{};
            Statek*  s1 = stocznia();
        
        licznik += s1->transportuj();
        if (dynamic_cast<Zaglowiec*>(s1)!=nullptr) {
            n_zaglowiec++;
        }
        delete[] s1;
        if (licznik>=towar)
        {
            return n_zaglowiec;
        }
    }
}