#include <iostream>
#include "caixa.h"
#include "caixa.cpp"


#include "cliente.h"
#include "cliente.cpp"

using namespace std;

int main(){
	Caixa caixas[15];
	Cliente clientes[30];
	for(int i = 0; i <15; i++){
		caixas[i] = new Caixa();
	}
	for(int i = 0; i < 30; ++i){
		clientes[i] = new Cliente();
	}




	//int status.Open();
	//cout << "Bem vindo!" << endl;
	//int status.Close();
	//cout << "Por favor procure outro caixa!" << endl;


	return 0;
}