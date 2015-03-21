Cliente::Cliente(){
	clock_1 = clock();
	esperando_fila = true;
}

Cliente::~CLiente(){}

bool Cliente::ser_atendido(){
	clock_2 = clock();
	tempo_espera = (double)(clock_2-clock_1)/(double)CLOCKS_PER_SEC;
}

double Cliente::get_tempo(){
	return tempo_espera;
}
