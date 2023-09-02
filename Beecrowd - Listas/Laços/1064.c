// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

// Entrada
// A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivos.

// Saída
// O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
#include <stdio.h>

int main() {
  int i;
  int positivo = 0;
  double somaPos = 0;
  double valor;

  for (i = 0; i < 6; i++) {
    scanf("%lf", &valor);

    if (valor > 0) {
      positivo++;
      somaPos += valor;
    }
  }

  printf("%d valores positivos\n", positivo);

  if (positivo > 0) {
    double media = somaPos / positivo;
    printf("%.1lf\n", media);
  }

  return 0;
}