// A fórmula de Binet é uma forma de calcular números de Fibonacci.

// Sua tarefa é, dado um natural n, calcular o valor de Fibonacci(n) usando a fórmula acima.

// Entrada
// A entrada é um número natural n (0 < n ≤ 50).

// Saída
// A saída é o valor de Fibonacci(n) com 1 casa decimal utilizando a fórmula de Binet dada.

#include <stdio.h>
#include <math.h>

double formula_binet(int n) {
    double positiva = (1 + sqrt(5)) / 2;
    double negativa = (1 - sqrt(5)) / 2;

    return(pow(positiva, n) - pow(negativa, n)) / sqrt(5);
}

int main() {
  int n;

  scanf("%d", &n);

  double resultado = formula_binet(n);
  printf("%.1lf\n", resultado);

  return 0;
}