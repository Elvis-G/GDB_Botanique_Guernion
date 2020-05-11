#ifndef PLANTE_CPP
#define PLANTE_CPP
#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

/*class Plante{
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
};*/


void Plante::pousse(){
    if (_engrais == 1) {
        _engrais = 2;        
    } else {
        _engrais = 1;    
    }
}


void Plante::arrose(){
    _arroser += 1;
}


void Plante::taille(){
    _tailler += 1;
}


void Plante::afficher_Plante(){
    std::cout << _nom << " est une plante " << std::endl << std::endl;
    
    if (_engrais == 0){
        std::cout << _nom << " n'a pas encore eu de l'engrais aujourd'hui " << std::endl;
    } else {
        std::cout << _nom << " a déjà reçu de l'engrais aujourd'hui " << std::endl;        
    } 

    if (_tailler == 0){
        std::cout << "Elle n'est pas taillé actuellement " << std::endl;
    } else if (_tailler == 1 || _tailler == 2) {
        std::cout << "Elle est taillé correctement " << std::endl;        
    } else {
        std::cout << "Elle a malheureusement été trop taillé " << std::endl;        
    }
    
    if (_arroser == 0){
        std::cout << "Elle n'a pas encore été arrosé " << std::endl;
    } else if (_arroser == 1 || _arroser == 2) {
        std::cout << "Elle est arrosé correctement " << std::endl;        
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
    
    std::cout << " sa valeur actuelle est de : " << _valeur*_statut*_croissance << std::endl << std::endl;
}


void Plante::statut(){
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

void Plante::maturiter(){
    if (_statut == 2 && _engrais == 1) {
        _maturiter +=3;
    } else if (_statut == 2 && _engrais == 0) {
        _maturiter +=2;        
    } else if (_statut == 1 && _engrais == 1) {
        _maturiter +=2;        
    } else if (_statut == 1 && _engrais == 0) {
        _maturiter +=1;        
    } else {
        _maturiter += 0;         
    }  
    
    if (_maturiter < 10) {
        _croissance = 1;
    } else if (_maturiter > 9 && _maturiter < 16) {
        _croissance = 2;    
    } else {
        _croissance = 1;    
    }
}


std::string Plante::getNom(){
    return _nom;
}


int Plante::getValeur(){
    return _valeur;
}


int Plante::getTailler(){
    return _tailler;
}


int Plante::getArroser(){
    return _arroser;
}


int Plante::getMCroissance(){
    return _maturiter;
}


int Plante::getEngrais(){
    return _engrais;
}
    


Plante::Plante(std::string nom): _nom(nom), _statut(1), _maturiter(0), _nourriture(10), _tailler(0), _arroser(0), _valeur(10){}

#endif