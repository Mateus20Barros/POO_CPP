#pragma once
#include <string>
#include <utility>
#include <variant>
#include "Titular.hpp"

template<int percentualTarifa>
class Conta {
	private:
		static int numeroContas;

	public:
		static int obterNumeroContas(void);

	private:
		std::string numeroConta;
		Titular titular;

	protected:
		float saldo;

	public:
		enum ResultadoSaque { Sucesso, ValorNegativo, SaldoInsuficiente };

		Conta(std::string numConta, Titular titular) 
			: numeroConta(numConta), titular(titular), saldo(0)
		{
			numeroContas++;
		}

		virtual ~Conta() 
		{
			numeroContas--;
		}

		std::variant<ResultadoSaque, float> sacar(float valorSacar) 
		{
			if (valorSacar < 0) {
				std::cout << "N�o pode sacar valor negativo" << std::endl;
				return ValorNegativo;
			}

			float tarifaSaque = valorSacar * (percentualTarifa / 100);
			float valorSaque = valorSacar + tarifaSaque;

			if (valorSaque > saldo) {
				std::cout << "Saldo insuficiente." << std::endl;
				return SaldoInsuficiente;
			}

			saldo -= valorSaque;

			return saldo;
		}

		void depositar(float valorDepositar)
		{
			if (valorDepositar < 0) {
				std::cout << "Valor nao permitido para deposito." << std::endl;
				return;
			}

			saldo += valorDepositar;
		}

		void operator+=(float valorDepositar)
		{
			depositar(valorDepositar);
		}

		std::string obterNumeroConta(void)
		{
			return numeroConta;
		}

		float saldoConta(void) const
		{
			return saldo;
		}

		bool operator<(const Conta& outra)
		{
			return numeroContas;
		}

};