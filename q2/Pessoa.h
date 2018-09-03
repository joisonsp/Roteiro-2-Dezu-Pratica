#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

class Pessoa
{
    public:
        Pessoa(std::string name);
        Pessoa(std::string name, std::string cel, Endereco ende);
        std::string toString();
        
		std::string getNome();
        void setNome(std::string name);
        std::string getTel();
        void setTel(std::string cel);
        Endereco getAdress();
        void setAdress(Endereco ende);

    private:
        std::string nome;
        std::string tel;
        Endereco adress;
        

};

#endif // ENDERECO_H


#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
	public:
	protected:
};

#endif
