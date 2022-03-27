//Leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variavel auxiliar
#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b;

  printf("Digite dois valores: ");
  scanf("%d%d", &a, &b);

  printf("a: %d\nb: %d\n", a, b);

  a = a+b;
  b = a-b;
  a = a-b;

  printf("a: %d\nb: %d\n", a, b);

  return 0;
  }
