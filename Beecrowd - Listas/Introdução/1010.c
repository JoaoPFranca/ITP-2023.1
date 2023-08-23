// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

// Entrada
// O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

// Saída
// A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

// Exemplos de Entrada	Exemplos de Saída
// 12 1 5.30
// 16 2 5.10

// VALOR A PAGAR: R$ 15.50
#include <stdio.h>

int main() {
    int codigo1, numeroPecas1, codigo2, numeroPecas2;
    float valorUnitario1, valorUnitario2;

    scanf("%d %d %f", &codigo1, &numeroPecas1, &valorUnitario1);
    scanf("%d %d %f", &codigo2, &numeroPecas2, &valorUnitario2);
    
    float valorTotal = (numeroPecas1 * valorUnitario1) + (numeroPecas2 * valorUnitario2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
    
    return 0;
}