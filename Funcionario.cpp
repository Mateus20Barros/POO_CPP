#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(CPF cpfTitular, std::string nomeTitular, float salario, DiaSemana diaPagamento)
	: Pessoa(cpfTitular, nomeTitular), salario(salario), diaPagamento(diaPagamento)
{}

std::string Funcionario::recuperaNome() const
{
	return nomeTitular;
}

float Funcionario::recuperaSalario() const
{
	return salario;
}