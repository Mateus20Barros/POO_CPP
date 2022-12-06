#pragma once
#include "Conta.hpp"

class ContaPoupanca : public Conta<3>
{
	public:
		ContaPoupanca(std::string numConta, Titular titular);
};