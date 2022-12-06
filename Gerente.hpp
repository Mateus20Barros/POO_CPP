#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"
#include "DiaSemana.hpp"

class Gerente final : public Funcionario, public Autenticavel
{
	public:
		Gerente(CPF ccpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento, std::string senha);
		float bonificacao() const;
};