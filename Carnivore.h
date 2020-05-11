#ifndef CARNIVORE_H
#define CARNIVORE_H
#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

class Carnivore: public Plante{
    protected:
    int _digestion = 0;

    public:

    void afficher_Carnivore();
    void manger();
 
    void statut(); 
    voir maturiter();   
    void pousse();
    void taille();
    void arrose();
    
    int getDigestion();
    
    Carnivore(std::string nom);
};
#endif