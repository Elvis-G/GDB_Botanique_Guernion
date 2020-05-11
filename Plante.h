#ifndef PLANTE_H
#define PLANTE_H
#include <iostream>
#include <string>
#include <vector>

class Plante{
    protected:
    int _statut;
    int _maturiter;
    int _nourriture;
    int _tailler;
    int _arroser;
    int _valeur;
    
    int _croissance;
    int _engrais = 1;
    std::string _nom;

    public:
    void afficher_Plante();    
    
    void virtual statut();
    voir virtual maturiter();
    void virtual pousse();
    void virtual taille();
    void virtual arrose();

// les ascenseurs
    std::string  getNom();
    int getValeur();
    int getTailler();
    int getArroser();
    int getCroissance();
    int getEngrais();

    Plante(std::string nom);
};
#endif