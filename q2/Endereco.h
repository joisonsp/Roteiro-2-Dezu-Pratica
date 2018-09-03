#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco(){}
        Endereco(std::string street, std::string postal, std::string district, std::string city, std::string state, int number);
        std::string toString();

    private:
        std::string rua;
        std::string cep;
        std::string bairro;
        std::string cidade;
        std::string estado;
        int numero;

};

#endif // ENDERECO_H


#ifndef ENDERECO_H
#define ENDERECO_H

class Endereco
{
	public:
	protected:
};

#endif
