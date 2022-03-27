// Leia a idade de duas pessoas e imprima a soma das idades

#include <stdio.h>

int main() {
  int idade1, idade2;
  int total;

  printf("Digite a primeira idade: ");
  scanf ("%d", &idade1);

  printf("Digite a segunda idade: ");
  scanf("%d", &idade2);

  total = idade1 + idade2;

  printf ("A soma das idades: %d", total);

  return 0;
}