// Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

// Entrada
// O arquivo de entrada contém 5 valores inteiros quaisquer.

// Saída
// Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

#include <stdio.h>

int main() {
  int i;
  int valor;
  int par;
  int impar;
  int positivo;
  int negativo;

  par = 0;
  impar = 0;
  positivo = 0;
  negativo = 0;

  for(i = 1; i <= 5; i++) {
    scanf("%d", &valor);

    if(valor % 2 == 0) {
      par++;
    } else {
      impar++;
    }

    if(valor > 0) {
      positivo++;
    } else if(valor < 0) {
      negativo++;
    }
  }

  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", positivo);
  printf("%d valor(es) negativo(s)\n", negativo);
  

return 0;
}