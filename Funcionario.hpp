#pragma once
#include "Pessoa.hpp"
#include "CPF.hpp"
#include "DiaSemana.hpp"
#include <string>

class Funcionario : public Pessoa<CPF>
{
	private:
		float salario;
		DiaSemana diaPagamento;

	public:
		Funcionario(CPF cpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento);
		std::string recuperaNome(void) const;
		virtual float bonificacao() const = 0;
		float recuperaSalario() const;
};