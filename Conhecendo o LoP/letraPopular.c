// O mundo do alfabeto resolveu iniciar uma competição de popularidade entre seus participantes. Cada letra a partir de agora receberá uma pontuação baseada na sua popularidade, ou seja, quantas vezes ela é utilizada no dia a dia, seja em e-mails de trabalho, mensagens no tik tok, ou como variáveis em programas C na disciplina de ITP. A pontuação será atribuída como o número de vezes que a letra foi usada naquele dia, multiplicado por um valor constante que representa o índice de popularidade daquele dia. 
// Faça um programa que recebe três informações: a letra, a quantidade de vezes que ela apareceu e o valor do índice de popularidade, e imprime como resultado a seguinte frase: "A popularidade de $ é de % pontos", onde $ será a letra que foi lida na entrada e % será a pontuação calculada, restrita a uma casa decimal.
// DICA: observe bem os exemplos de entrada e saída, e cuidado com a formatação do texto. Verifique se você sabe resolver na cabeça e rabiscando no papel antes de ir codificar o seu programa!

#include <stdio.h>

int main() {
  //Declarando variáveis
  char letra;
  int numeroDeVotos;
  float cte = 0.0;
  float popularidade;

  //scanf para pegar os valores (letra como char, numeroDeVotos como int e cte como float)
  scanf("%c", &letra);
  scanf("%d", &numeroDeVotos);
  scanf("%f", &cte);

  //multiplicação
  popularidade = numeroDeVotos * cte;
  
  //%c pq letra vem no formato char, %.1f pq o float vem com apenas uma casa decimal representada
  printf("A popularidade de %c é %.1f\n", letra, popularidade);
  
  return 0;
}