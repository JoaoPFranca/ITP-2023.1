// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.
// Entrada

// Leia três valores de ponto flutuante (double) A, B e C.
// Saída

// Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

#include <stdio.h>
#include <math.h>

int main() {
  double a;
  double b;
  double c;
  double delta;
  double r1;
  double r2;

  scanf("%lf %lf %lf", &a, &b, &c);

  delta = b * b - 4 * a * c;

  //bhaskara: x = -b +- sqrt(delta)/(2*a)
  //entao a não pode ser zero e delta tbm não

  if (a == 0 || delta < 0) {
    printf("Impossivel calcular\n");
  } else {
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);
    
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    }

  return 0;
}