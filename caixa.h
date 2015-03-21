#ifndef Caixa
#define Caixa

class Caixa{
private:
	bool aberto;
	bool atendendo;
public:
	Caixa();
	~Caixa();
	bool atender();
	bool fechar();
	bool abrir();
	bool verificar();
};
#endif