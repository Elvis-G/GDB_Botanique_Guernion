#include <iostream>
#include <string>
#include <vector>
#include "Fleur.cpp"
#include "Player.cpp"
#include "Plante.cpp"
#include "Carnivore.cpp"


/* taillé (0) = signifie que la plante n'est pas taillé ; (1) et (2) = taillé ; (3) = trop taillé
arrosé (0) = signifie qu'elle n'est pas arrosé ; (1) et (2) = arrosé : (3) = trop arrosé

statut (1) = santé normal ; statut (2) = bonne santé ; statut (0) = mauvaise santé

maturité (entre 0 et 9) = Pas encore adulte ; maturité (entre 10 et 12) = parfait ; maturité (>12) = trop vieille

engrais (1) = pas encore nourri ; engrais (2) = nourri

croissance (1) = trop jeune ou devenue trop vieille ; croissance (2) = a atteinte  son âge d'or ; 

*/

int main()
{

Plante (*laPlante) = new Plante ("Iris du Japon");
Fleur (*laFleur) = new Fleur ("Ume");
Carnivore (*laCarnivore) = new Carnivore ("Nepenthes");

Player (*leBotaniste) = new Player ("Eren");


    (*leBotaniste).afficher_Player();
    (*laPlante).afficher_Plante();
    
    
    
    
    (*laFleur).afficher_Fleur();
    
    
    
    
    (*laCarnivore).afficher_Carnivore();
    

    return 0;
}
