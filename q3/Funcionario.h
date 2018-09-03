#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
	public:
		Funcionario();
		std::string getNome();
		void setNome(std::string name);
		std::string getMatricula();
		void setMatricula(std::string matric);
		std::string getSalario();
		void setSalario(std::string salary);
		
	private:
		std::string nome;
		std::string matricula;
		std::string salario;
		
};

#endif
