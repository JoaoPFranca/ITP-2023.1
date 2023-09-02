// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

// Entrada
// A entrada contem três números inteiros.

// Saída
// Imprima a saída conforme foi especificado.

// Exemplo de Entrada	Exemplo de Saída
// 7 21 -14

// -14
// 7
// 21

// 7
// 21
// -14

#include <stdio.h>

int main() {
  int num1, num2, num3, a, b, c, comparador;

  scanf("%d %d %d", &num1, &num2, &num3);

  a = num1;
  b = num2;
  c = num3;

  if (a < b) {
    comparador = a;
    a = b;
    b = comparador;
  }

  if (b < c) {
    comparador = b;
    b = c;
    c = comparador;
  }

  if (a < b) {
    comparador = a;
    a = b;
    b = comparador;
  }

  printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b, a, num1, num2, num3);

  return 0;
}