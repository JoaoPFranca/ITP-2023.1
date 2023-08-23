// Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

// Entrada

// O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
// Saída

// O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

#include <stdio.h>

int main() {

  int codigo;
  int qtd;
  double valor;
  double total;

  scanf("%d %d", &codigo, &qtd);

  switch(codigo) {
    case(1): valor = 4; break;
    case(2): valor = 4.5; break;
    case(3): valor = 5; break;
    case(4): valor = 2; break;
    case(5): valor = 1.5; break;
  }

  total = qtd * valor;

  printf("Total: R$ %02.2lf\n", total);


  return 0;
}