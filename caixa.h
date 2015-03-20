#ifndef Caixa
#define Caixa

class Caixa{
private:
	int status;
public:
	Open();
	Close();
};

Caixa::verificar(int status){
	if (status == 1){
		return Open();
	}
	elseif (status == 0){
		return Close();
	}
}

Caixa::Open(int attend){
	return attend;

}

Caixa::Close(int next){
	return next;
}

Caixa::Atendimento(){
	
}
#endif