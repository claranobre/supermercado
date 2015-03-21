#include <time.h> 
#ifndef Cliente
#define Cliente

Class Cliente{
private:
	clock_t clock_1, clock_2;
	bool esperando_fila;
	double tempo_espera;
public:
	Cliente();
	~Cliente();
	bool ser_atendido();
	double get_tempo();
}

#endif