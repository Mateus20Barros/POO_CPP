#include <iostream>
#include "Gerente.hpp"
#include "DiaSemana.hpp"

Gerente::Gerente(CPF cpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento, std::string senha)
	: Funcionario(cpfTitular, nomeTitular, salario, diaPagamento), Autenticavel(senha)
{}

float Gerente::bonificacao() const
{
	return recuperaSalario() * 0.5;
}