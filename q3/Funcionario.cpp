#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario::Funcionario(){
}

string Funcionario:: getNome(){
	return nome;	
}

void Funcionario::setNome(std::string name){
	nome = name;
}

string Funcionario::getMatricula(){
	return matricula;
}

void Funcionario::setMatricula(std::string matric){
	matricula = matric;
}

string  Funcionario::getSalario(){
	return salario;
}

void Funcionario::setSalary(string salary){
	salario = salary;
}
