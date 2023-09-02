// Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

// Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

// Entrada
// Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

// Saída
// Na saída, deve ser apresentada a duração do evento, no seguinte formato:

// W dia(s)
// X hora(s)
// Y minuto(s)
// Z segundo(s)

// Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

#include <stdio.h>

int main() {
 int dia, diafim, hora, horafim, min, minfinal, seg, segfinal;

scanf("Dia %d", &dia);
 scanf("%d : %d : %d\n", &hora, &min, &seg);
 scanf("Dia %d", &diafim);
 scanf("%d : %d : %d", &horafim, &minfinal, &segfinal);

seg = segfinal - seg;
 min = minfinal - min;
 hora = horafim - hora;
 dia = diafim - dia;

if (seg < 0) {
 seg += 60;
 min--;
 }

 if (min < 0) {
 min += 60;
 hora--;
 }

if (hora < 0) {
 hora += 24;
 dia--;
 }

printf("%d dia(s)\n", dia);
 printf("%d hora(s)\n", hora);
 printf("%d minuto(s)\n", min);
 printf("%d segundo(s)\n", seg);
}