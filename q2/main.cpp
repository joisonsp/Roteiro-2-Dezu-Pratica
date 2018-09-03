#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"
using namespace std;

int main()
{
    Endereco end1 = Endereco("Manoel", "123", "bancarios", "JP", "PB", 987);
    Endereco end2 = Endereco("Belarmino", "456", "manaira", "JP", "PB", 2303);
    
	Pessoa Pessoa1 = Pessoa("Joison", "996115329", end1 );
    Pessoa Pessoa2 = Pessoa("Mikael", "1234567890", end2 );
    end1.toString();
    end2.toString();

    cout << Pessoa1.toString() << endl << Pessoa2.toString() << endl;

    return 0;
}

