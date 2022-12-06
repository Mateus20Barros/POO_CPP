#pragma once
#include <iostream>
#include "Conta.hpp"

class ContaCorrente final : public Conta<5>
{
	public:
		ContaCorrente(std::string numConta, Titular titular);
		void transferePara(Conta& contaDestino, float valor);
		void operator+=(ContaCorrente& contaOrigem);
};