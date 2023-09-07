// Depois de capturar muitos Pomekons, Dabriel e Guarte resolveram batalhar. A
// forma de duelo é simples, cada treinador coloca um Pomekon na batalha e vence
// quem tem o Pomekon com maior valor de golpe, que é definido da seguinte
// maneira:

// O Bônus será dado ao Pomekon do treinador que estiver em um level de valor
// par.

// Neste problema será dado a você o valor do bônus aplicado, os valores de
// ataque e defesa do Pomekon de Dabriel e Guarte e seus respectivos níveis,
// cabe a você informar o ganhador da batalha.

// Entrada
// A entrada é composta por diversas instâncias. A primeira linha da entrada
// contém um inteiro T indicando o número de instâncias. Cada instância começa
// com um inteiro B (0 ≤ B ≤ 100), que indica o valor do bônus aplicado. Nas
// duas linhas seguintes terão três inteiros Ai, Di e Li (1 ≤ Ai, Di ≤ 100, 1 ≤
// Li ≤ 50), representado o valor de ataque do Pomekon, o valor de defesa e o
// level do treinador. A primeira linha representa o Pomekon de Dabriel e a
// segunda o de Guarte.

// Saída
// Para instância na entrada você deverá imprimir o nome do treinador que irá
// vencer a batalha, em caso de empate imprima: "Empate", sem aspas.

#include <stdio.h>

int valorGolpe(int bonus, int ai, int di, int li) {
  return ((ai + di) / 2) + (li % 2 == 0 ? bonus : 0);
}

int partida(int bonus, int aiG, int diG, int liG, int aiD, int diD, int liD) {
  int dabriel = valorGolpe(bonus, aiD, diD, liD);
  int guarte = valorGolpe(bonus, aiG, diG, liG);

  if (guarte > dabriel) {
    return 1;
  } else if (dabriel > guarte) {
    return 2;
  } else {
    return 3;
  }
}

int main() {
  int aiG, diG, liG;
  int aiD, diD, liD;
  int bonus;
  int numeroInstancias, i;

  scanf("%d", &numeroInstancias);

  for (i = 0; i < numeroInstancias; i++) {
    scanf("%d", &bonus);
    scanf("%d %d %d", &aiD, &diD, &liD);
    scanf("%d %d %d", &aiG, &diG, &liG);

    int vencedor = partida(bonus, aiG, diG, liG, aiD, diD, liD);

    switch (vencedor) {
    case 1:
      printf("Guarte\n");
      break;
    case 2:
      printf("Dabriel\n");
      break;
    case 3:
      printf("Empate\n");
      break;
    }
  }

  return 0;
}