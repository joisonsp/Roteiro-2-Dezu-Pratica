#include "Consultor.h"
#include <string>

using namespace std;

float Consultor::getSalario(){
	salario = salario + salario*0.01;
}

void Consultor::setPercent(float percentual){
	percent = percentual;
}

float Consultor::getSalario(float percentual){
		salario = salario + salario*percentual;
}
