#include <iostream>
#include "Caixa.hpp"

Caixa::Caixa(CPF cpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento)
	: Funcionario(cpfTitular, nomeTitular, salario, diaPagamento)
{}

float Caixa::bonificacao() const
{
	return recuperaSalario() * 0.1;
}