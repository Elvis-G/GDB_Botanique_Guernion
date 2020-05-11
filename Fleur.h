#ifndef FLEUR_H
#define FLEUR_H
#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

class Fleur: public Plante{
    protected:
    int _eclosion = 1;

    public:

    void afficher_Fleur();
 
    void statut();     
    voir maturiter();
    void pousse();
    void taille();
    void arrose();
    
    int getEclosion();
    
    Fleur(std::string nom);
    
    
};
#endif