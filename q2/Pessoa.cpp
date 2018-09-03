#include "Pessoa.h"
#include "Endereco.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Pessoa::Pessoa(string name){
   nome = name;
}

Pessoa::Pessoa(string name, string cel, Endereco ende){
    nome = name;
    tel = cel;
    adress = ende;
}

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(string name){
    nome = name;
}

Endereco Pessoa::getAdress(){
    return adress;
}

void Pessoa::setAdress(Endereco ende){
    adress = ende;
}

string Pessoa::getTel(){
    return tel;
}

void Pessoa::setTel(std::string cel){
    tel=cel;
}

string Pessoa::toString(){

    std::stringstream linha; 
    linha << "\n\nnome: "<< nome << "\ntelefone: "<< tel << "\n\nendereco: \n[" << adress.toString()<<"]";
    return linha.str();
}

#include "Pessoa.h"
