#include <iostream>
#include <string>
#include "CPF.hpp"

CPF::CPF(std::string cpfTitular) : cpfTitular(cpfTitular)
{}

std::string CPF::obtercpfTitular(void) 
{
	return cpfTitular;
}