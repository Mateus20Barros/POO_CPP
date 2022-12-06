#pragma once
#include "Funcionario.hpp"
#include "DiaSemana.hpp"

class Caixa final : public Funcionario
{
	public:
		Caixa(CPF cpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento);
		float bonificacao() const;
};