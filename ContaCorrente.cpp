#include <iostream>
#include "ContaCorrente.hpp"


ContaCorrente::ContaCorrente(std:: string numConta, Titular titular) 
	: Conta(numConta, titular)
{}

void ContaCorrente::transferePara(Conta& contaDestino, float valor)
{
	auto resultado = sacar(valor);
	
	if (resultado.index() == 1) {
		contaDestino.depositar(valor);
	}
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem)
{
	contaOrigem.transferePara(*this, contaOrigem.saldoConta() / 2);
}