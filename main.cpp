#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Funcionario.hpp"
#include "Titular.hpp"
#include "CPF.hpp"
#include "Gerente.hpp"
#include "DiaSemana.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
   cout << "Saldo eh " << conta.saldoConta() << endl;
}

void realizarSaque(Conta& conta) {
   std::variant<Conta::ResultadoSaque, float> resultado = conta.sacar(200);

   if (auto saldo = std::get_if<float>(&resultado)) {
   cout << "Novo saldo da conta eh " << saldo << endl;
   }
}

void fazLogin(Autenticavel& alguem, string senha) {
   alguem.autentica(senha)
      ? cout << "Login realizar com sucesso." << endl
      : cout << "Senha inv�lida" << endl;
}

ostream& operator<<(ostream& cout, const Conta& conta) {
   Pessoa titular = conta.titular;
   cout << "Saldo conta eh (operador): " << conta.saldoConta() << endl;
   cout << "O titular da conta eh " << titular.obterNome() << endl;

   return cout;
}

template<typename MeuTipo>
MeuTipo Menor(MeuTipo a, MeuTipo b)
{
   return a < b ? a : b;
}


int main(void)
{
   ContaPoupanca poupanca_01("1235", Titular(CPF("123.46.789-12"), "Pessoa 01", "1030"));
   poupanca_01.depositar(700);

   ContaCorrente corrente_01("4321", Titular(CPF("321.654.987-78"), "Pessoa 02", "2030"));
   corrente_01.depositar(500);
   (Conta&)corrente_01 += 300;

   ContaCorrente corrente_02("2013", Titular(CPF("123.456.789-10"), "Pessoa 03", "1230"));
   corrente_02 += corrente_01;

   cout << Menor<Conta&>(poupanca_01, corrente_01);
   
   return 0;
}