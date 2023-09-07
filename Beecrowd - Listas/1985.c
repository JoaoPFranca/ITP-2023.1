// O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. Segue o cardápio do dia contendo o número do produto e seu respectivo valor.
// 1001 | R$ 1.50
// 1002 | R$ 2.50
// 1003 | R$ 3.50
// 1004 | R$ 4.50
// 1005 | R$ 5.50

// Entrada
// A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.
// Obs.: não poderão ser informados números de produtos repetidos.

// Saída
// Você deve imprimir o valor da compra com duas casas decimais.

#include <stdio.h>

double calculos(int codigo, int qtd) {
  double valor;
  double totalCada;

  switch (codigo) {
    case (1001): valor = 1.5; break;
    case (1002): valor = 2.5; break;
    case (1003): valor = 3.5; break;
    case (1004): valor = 4.5; break;
    case (1005): valor = 5.5; break;
    default: valor = 0.0; break;
  }

  totalCada = valor * qtd;

  return totalCada;
}

int main() {
  int p, i, codigo, qtd;
  double total = 0.0;

  scanf("%d", &p);

  for (i = 0; i < p; i++) {
    scanf("%d %d", &codigo, &qtd);
    double totalCada = calculos(codigo, qtd);
    total += totalCada;
  }

  
  printf("%.2f\n", total);

  return 0;
}