Caixa::Caixa(){
	aberto = true;
	atendendo = false;
}

Caixa::~Caixa(){}

bool Caixa::verificar(){
	if(aberto){
		return true;
	}
	else{
		return false;
	}
}

bool Caixa::atender(){
	if(verificar()){
		atendendo = true;
		return true;
	}
	return false;
}

bool Caixa::fechar(){
	atendendo = false;
	aberto = false;
	return true;
}

bool Caixa::abrir(){
	aberto = true;
	return true;
}