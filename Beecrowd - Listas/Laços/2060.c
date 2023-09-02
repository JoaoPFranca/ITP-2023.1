// Bino e Cino são colegas inseparáveis. Bino gosta de criar desafios matemáticos para Cino resolver. Desta vez, Bino gerou uma lista de números e perguntou ao Cino quantos números da lista são múltiplos de 2, 3, 4 e 5.

// Esse desafio pode parecer simples, porém, quando a lista contém muitos números, Cino se confunde e acaba errando alguns cálculos. Para ajudar Cino, faça um programa para resolver o desafio de Bino.

// Entrada
// A primeira linha da entrada consiste em um inteiro N (1 ≤ N ≤1000), representando a quantidade de números na lista de Bino.

// A segunda linha contém N inteiros Li (1 ≤ Li ≤ 100), representando os números da lista de Bino.

// Saída
// Imprima a quantidade de números múltiplos de 2, 3, 4 e 5 presentes na lista. Observe a formatação da saída nos exemplos, pois ela deve ser seguida rigorosamente.

// Exemplo de Entrada	Exemplo de Saída
// 5
// 2 5 4 20 10

// 4 Multiplo(s) de 2
// 0 Multiplo(s) de 3
// 2 Multiplo(s) de 4
// 3 Multiplo(s) de 5

#include <stdio.h>

int main() {
  int N, multiplos_2, multiplos_3, multiplos_4, multiplos_5;
  
  multiplos_2 = 0;
  multiplos_3 = 0;
  multiplos_4 = 0;
  multiplos_5 = 0;
  
  scanf("%d", &N);

  int numeros[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &numeros[i]);
  }

  for (int i = 0; i < N; i++) {
    if (numeros[i] % 2 == 0) {
      multiplos_2++;
    }
    if (numeros[i] % 3 == 0) {
      multiplos_3++;
    }
    if (numeros[i] % 4 == 0) {
      multiplos_4++;
    }
    if (numeros[i] % 5 == 0) {
      multiplos_5++;
    }
  }

  printf("%d Multiplo(s) de 2\n", multiplos_2);
  printf("%d Multiplo(s) de 3\n", multiplos_3);
  printf("%d Multiplo(s) de 4\n", multiplos_4);
  printf("%d Multiplo(s) de 5\n", multiplos_5);

  return 0;
}