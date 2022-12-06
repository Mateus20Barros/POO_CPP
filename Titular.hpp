#pragma once
#include <string>
#include "Pessoa.hpp"
#include "CPF.hpp"
#include "Autenticavel.hpp"

class Titular : public Pessoa<CPF>, public Autenticavel
{
	public:
	   Titular(CPF cpfTitular, std::string nomeTitular, std::string senha);
};