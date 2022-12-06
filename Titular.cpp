#include <iostream>
#include "Titular.hpp"
#include <string>

Titular::Titular(CPF cpfTitular, std::string nomeTitular, std::string senha) 
	: Pessoa(cpfTitular, nomeTitular), Autenticavel(senha)
{}