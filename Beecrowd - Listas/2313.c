// Dados três valores, verifique se os três podem formar um triângulo. Em caso afirmativo, verifique se ele é escaleno, isóceles ou equilátero e se trata-se de um triângulo retângulo ou não.

// Entrada
// A entrada consiste em três números inteiros A,B e C (0 < A,B,C < 105).

// Saída
// A saída deve conter a string "Invalido" se os valores lidos não formarem um triângulo. Se os valores formarem um triângulo a saída deve ser "Valido-Equilatero", "Valido-Escaleno" ou "Valido-Isoceles" de acordo com a característica do triângulo seguido de "Retangulo: S" se o triângulo for retângulo ou "Retangulo: N" se não for, conforme os exemplos.

#include <stdio.h>

int identificacao(int A, int B, int C) {
  int tipo;
  
  if(A + B <= C || A + C <= B || B + C <= A) {
    tipo = 4;
  } else {
    if(A == B && B == C){
      tipo = 1;
    } else if((A == B && B != C) || (A == C && C != B) || (B == C && C != A)) {
      tipo = 2;
    } else {
      tipo = 3;
    }
  }
  return tipo;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int type = identificacao(A, B, C);
  
    switch(type){
      case(4): printf("Invalido\n"); break;
      case(1): printf("Valido-Equilatero\n"); break;
      case(2): printf("Valido-Isoceles\n"); break;
      case(3): printf("Valido-Escaleno\n"); break;
    }

  if (type != 4) {
    if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) {
        printf("Retangulo: S\n");
    } else {
        printf("Retangulo: N\n");
    }
  }
  
}