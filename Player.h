#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <vector>
#include "Fleur.h"
#include "Plante.h"

class Player{
    protected:
    std::string _nom;
    int _argent;
    int _nombrePlante;
    int _jours;
    

    public:
    void donner_Engrais(Plante * cible);
    void tailler(Plante * cible);
    void arroser(Plante * cible);
    void donner_Manger(Plante * cible);
    void achatPlante(Plante * cible);
    void reventePlante(Plante * cible);
    
    void dormir();
    void afficher_Player();
    
    int getJours();

    Player(std::string nom, int argent, int nombrePlante);
    
};
#endif