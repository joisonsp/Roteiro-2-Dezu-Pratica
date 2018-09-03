#include "Endereco.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


Endereco::Endereco(string street, string postal, string district, string city, string state, int number)
{
    rua = street;
    cep = postal;
    bairro = district;
    cidade = city;
    estado = state;
    numero = number;
}

string Endereco::toString(){

    std::stringstream linha; 
    linha << "rua: "<< rua << "\ncep: "<< cep << "\nbairro: "<< bairro << "\ncidade: "<< cidade << "\nestado: "<< estado << "\nnumero: "<< numero ;
    return linha.str();
}

#include "Endereco.h"
