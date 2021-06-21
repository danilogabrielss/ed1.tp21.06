#include <iostream>
using namespace std;

#define MAX 30

struct Pilha
{
	int qtde;
	float elementos[MAX];
};

Pilha* init()
{
	Pilha *p = new Pilha;
	p->qtde = 0;
	return p;
}

int pushpar(Pilha *p, int v)
{
	int podeEmpilhar = (p->qtde < MAX);
	if(p->elementos[p->qtde - 1] < v)
	{
		if (v % 2 == 0)
		{
			if (podeEmpilhar)
			{
				//podeEmpilhar = (p->qtde < MAX);
				p->elementos[p->qtde++] = v;
			}
		}
		else
		{
			podeEmpilhar = 0;
			cout << "O numero nao eh PAR. ";
		}
	}
	else
	{
		podeEmpilhar = 0;
		cout << "O numero tem que ser maior que o anterior. ";
	}
	return podeEmpilhar;
}
int pushimpar(Pilha *p, int v)
{
	int podeEmpilhar = (p->qtde < MAX);
	if(p->elementos[p->qtde - 1] < v)
	{
		if (v % 2 == 1)
		{
			if (podeEmpilhar)
			{
				//podeEmpilhar = (p->qtde < MAX);
				p->elementos[p->qtde++] = v;
			}
		}
		else
		{
			podeEmpilhar = 0;
			cout << "O numero nao eh IMPAR. ";
		}
	}
	else
	{
		podeEmpilhar = 0;
		cout << "O numero tem que ser maior que o anterior. ";
	}
	return podeEmpilhar;
}

float pop(Pilha *p)
{
	int podeDesempilhar = (p->qtde > 0);
	float v;
	if (podeDesempilhar)
	{
		v = p->elementos[p->qtde - 1];
		p->qtde--;
	}
	else
	{
		v = -1;
	}
	return v;
}


int isEmpty(Pilha *p)
{
	return (p->qtde == 0);
}

int count(Pilha *p)
{
	return (p->qtde);
}

void freePilha(Pilha *p)
{
	free(p);
}

void print(Pilha *p)
{
	cout << "Qtde de elementos na pilha: " << p->qtde << endl;
	for(int i = p->qtde - 1; i >= 0; --i)
	{
		cout << p->elementos[i] << endl;
	}
	cout << "--------------" << endl;
}

int main(int argc, char** argv)
{
	Pilha *pilhaFloat;
	pilhaFloat = new Pilha;
	pilhaFloat = init();

	cout << "Pilha vazia: " << (isEmpty(pilhaFloat) ? "SIM" : "NAO") << endl;

	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 14) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 31) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 40) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 55) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 60) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 75) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 95) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 100) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 105) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 115) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 120) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 140) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 141) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 150) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 145) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 160) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 165) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 175) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 180) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 195) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 215) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 220) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 214) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 231) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 240) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 255) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 250) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 275) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 295) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 300) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 305) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushimpar(pilhaFloat, 315) ? "SIM" : "NAO") << endl;
	cout << "Empilhado valor: " << (pushpar(pilhaFloat, 320) ? "SIM" : "NAO") << endl;

	cout << "Pilha vazia: " << (isEmpty(pilhaFloat) ? "SIM" : "NAO") << endl;

	print(pilhaFloat);

	for (int i = 0; i < 30; ++i)
		cout << "Valor desempilhado: " << pop(pilhaFloat) << endl;	

	print(pilhaFloat);

	freePilha(pilhaFloat);

	return 0;
}
