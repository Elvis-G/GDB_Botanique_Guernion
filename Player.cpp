#ifndef PLAYER_CPP
#define PLAYER_CPP
#include <iostream>
#include <string>
#include <vector>
#include "Fleur.h"
#include "Player.h"
#include "Plante.h"

/*class Player{
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
    
};;*/

    void Player::afficher_Player(){
        std::cout << _nom << " est un botaniste." << std::endl << std::endl;
    }

    void Player::donner_Engrais(Plante * cible){
        if ((*cible).getEngrais() == 0) {
        std::cout << _nom << " donne de l'engrais a : " << (*cible).getNom() << std::endl << std::endl;
        (*cible).pousse();
        } else {
        std::cout << (*cible).getNom() << " a déjà reçu de l'engrais aujourd'hui : " << std::endl << std::endl;            
        }
    }


    void Player::tailler(Plante * cible){
        std::cout << _nom << " est en train de taillé : " << (*cible).getNom() << std::endl << std::endl;
        (*cible).taille();
    }


    void Player::arroser(Plante * cible){
        std::cout << _nom << " est en train d'arrosé : " << (*cible).getNom() << std::endl << std::endl;
        (*cible).arrose();
    }


    void Player::donner_Manger(Plante * cible){
        if ((*cible).getDigestion() == 0){
            std::cout << _nom << " donne une mouche à manger à : " << (*cible).getNom() << std::endl << std::endl;
            (*cible).manger();            
        } else {
            std::cout << (*cible).getNom() << " est en train de digérer : " << std::endl << std::endl;
        }

        
    }


    void Player::achatPlante(Plante * cible){
        std::cout << _nom << " achète une plante : " << (*cible).getNom() << std::endl << std::endl;
        _argent -= (*cible).getValeur();
        _nombrePlante += 1;
    }
    
    
    void Player::reventePlante(Plante * cible){
        std::cout << _nom << " revent la plante : " << (*cible).getNom() << std::endl << std::endl;
        _argent += (*cible).getValeur();
        _nombrePlante -= 1;
    }


    void Player::dormir(){
        std::cout << _nom << " est parti dormir. " << std::endl << "[...]" << std::endl << "Le soleil se lève, une nouvelle journée commence." << std::endl << std::endl;
        _jours +=1;
 
        (laPlante).statut();
        (laCarnivore).statut();
        (laFleur).statut(); 
        
        (laPlante).maturiter();
        (laCarnivore).maturiter();
        (laFleur).maturiter();

        (laPlante).pousse();
        (laCarnivore).pousse();
        (laFleur).pousse();
        
        (laPlante).getTailler() -= 1;
        (laCarnivore).getTailler() -= 1;
        (laFleur).getTailler() -= 1;
        
        (laPlante).GetArroser() -= 1;
        (laCarnivore).GetArroser() -= 1;
        (laFleur).GetArroser() -= 1;
        
        (laCarnivore).GetDigestion() -= 1;
        
    }


    int Player::getJours(){
        return _jours;
    }

    Player::Player(std::string nom): _nom(nom), _argent(50), _nombrePlante(3){}
#endif