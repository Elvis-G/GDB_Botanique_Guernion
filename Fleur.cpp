#ifndef FLEUR_CPP
#define FLEUR_CPP
#include <iostream>
#include <string>
#include <vector>
#include "Fleur.h"
#include "Plante.h"

/*class Fleur: public Plante{
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
    
    
};*/


void Fleur::pousse(){
    if (_engrais == 1) {
        _engrais = 2;        
    } else {
        _engrais = 1;    
    }
}


void Fleur::arrose(){
    _arroser += 1;
}


void Fleur::taille(){
    _tailler += 1;
}



void Fleur::afficher_Fleur(){
   std::cout << _nom << " est une fleur " << std::endl << std::endl;
    
    if (_engrais == 0){
        std::cout << _nom << " n'a pas encore eu de l'engrais aujourd'hui " << std::endl;
    } else {
        std::cout << _nom << " a déjà reçue de l'engrais aujourd'hui " << std::endl;        
    } 

    if (_tailler == 0){
        std::cout << "Elle n'est pas taillée actuellement " << std::endl;
    } else if (_tailler == 1 || _tailler == 2) {
        std::cout << "Elle est taillée correctement " << std::endl;        
    } else {
        std::cout << "Elle a malheureusement été trop taillé " << std::endl;        
    }
    
    if (_arroser == 0){
        std::cout << "Elle n'a pas encore été arrosé " << std::endl;
    } else if (_arroser == 1 || _arroser == 2) {
        std::cout << "Elle est arrosée correctement " << std::endl;        
    } else {
        std::cout << "Elle a malheureusement été trop arrosé " << std::endl;        
    }    
    
    if (_maturiter < 10){
        std::cout << _nom << " n'a pas encore atteint sa taille adulte " << std::endl;
    } else if (_maturiter > 9 && _maturiter < 16) {
        std::cout << _nom << " est à ce jour mature" << std::endl;        
    } else {
        std::cout << _nom << " a malheureusement dépassé son âge d'or " << std::endl;        
    } 
 
 
    if (_arroser == 0 || _arroser > 2 && _tailler == 0 || _tailler > 2) {
        _statut = 0;
    } else if (_arroser == 0 || _arroser > 2 && _tailler == 1 || _tailler == 2){
        _statut = 1;        
    } else if (_arroser == 1 || _arroser == 2 && _tailler == 0 || _tailler > 2){
        _statut = 1;        
    } else if (_arroser == 1 || _arroser == 2 && _tailler == 1 || _tailler == 2){
        _statut = 2;        
    } 
    
    if (_statut == 1){
        std::cout << _nom << " est en très bonne santé " << std::endl;
    } else if (_statut == 0) {
        std::cout << _nom << " est dans un état normal" << std::endl;        
    } else {
        std::cout << _nom << " est actuellement en mauvaise santé " << std::endl;        
    } 
    
    std::cout << " sa valeur actuelle est de : " << _valeur*_statut*_croissance*_eclosion << std::endl;
}


void Fleur::statut(){
    if (_arroser == 0 || _arroser > 2 && _tailler == 0 || _tailler > 2) {
        _statut = 0;
    } else if (_arroser == 0 || _arroser > 2 && _tailler == 1 || _tailler == 2){
        _statut = 1;        
    } else if (_arroser == 1 || _arroser == 2 && _tailler == 0 || _tailler > 2){
        _statut = 1;        
    } else if (_arroser == 1 || _arroser == 2 && _tailler == 1 || _tailler == 2){
        _statut = 2;        
    }
}


void Fleur::maturiter(){
    if (_statut == 2 && _engrais == 1) {
        _maturiter +=2;
    } else if (_statut == 2 && _engrais == 0) {
        _maturiter +=1;        
    } else if (_statut == 1 && _engrais == 1) {
        _maturiter +=1;        
    } else if (_statut == 1 && _engrais == 0) {
        _maturiter +=0;        
    } else {
        _maturiter += 0;         
    }  
    
    if (_maturiter < 10) {
        _croissance = 1;
        _eclosion = 1;
    } else if (_maturiter > 9 && _maturiter < 16) {
        _croissance = 2;
        _eclosion = 10;
    } else {
        _croissance = 1;  
        _eclosion = 1;
    }
}


int Fleur::getEclosion(){
    return _eclosion;
}


    Fleur::Fleur(std::string nom): Plante(nom) {}
#endif