// O supermercado Inteiramente e Totalmente Pão-duro (ITP) estava com um grande problema na venda de seus produtos, porque muitos haviam expirado o prazo de validade. Ao invés de resolver o problema, a administração bolou um plano para "mascarar" os prazos de validade: em vez de informar a data em que o produto vai expirar, eles colocam a quantidade de dias até o produto expirar. Dessa forma, apenas quem estiver com a matemática afiada, vai conseguir saber se o produto está perto de estragar ou não.
// Mas como você está com a matemática e a programação em dia, você resolveu fazer um programa para ajudar os clientes do supermercado! O seu programa vai ler um valor numérico inteiro, que representa uma quantidade de dias, e vai dar como resposta o quanto essa quantidade valeria em anos, meses e dias. Para facilitar suas contas, considere que todo ano tem 360 dias, e todo mês tem 30 dias.

#include <stdio.h>

int main() {
    int num;
    //entrada com num sendo inteiro
    scanf("%d", &num);

    //define os anos
    int anos = num / 365;
    //usei uma variável resto para facilitar meu trabalho em calcular o número de dias e meses.
    int resto = num % 365;
    int meses = resto / 30;
    int dias = resto % 30;

  //A saída como foi pedida
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}