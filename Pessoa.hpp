#pragma once
#include <iostream>
#include <string>

template<typename Documento>
class Pessoa
{
	protected:
		Documento documento;
		std::string nomeTitular;

	public:
		Pessoa(Documento documento, std::string nomeTitular) 
			: documento(documento), nomeTitular(nomeTitular)
		{
			verificaNomeTitular();
		}
      
		std::string obterNome() const
		{
			return nomeTitular;
		}

	private:
		void verificaNomeTitular(void)
		{
			if (nomeTitular.size() < 5) {
				std::cout << "Nome muito curto" << std::endl;
				exit(1);
			}
		}
};