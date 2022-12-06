#pragma once
#include <string>

class CPF {
	private:
		std::string cpfTitular;

	public:
		explicit CPF(std::string cpfTitular);
		std::string obtercpfTitular(void);
};