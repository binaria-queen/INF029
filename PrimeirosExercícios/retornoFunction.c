#include <stdio.h>

int multiplica (int n1, int n2){
  
  int res;
  res = n1 * n2;
  return res;
}

int main(){

  int v1, v2, resultado;

  printf("Digite o primeiro valor: ");
  scanf("%d", %v1);
  
  printf("Digite o segundo valor: ");
  scanf("%d", %v2);
  resultado = multiplica(v1, v2);
  printf("Resultado = %d", resultado);
  
  return 0;
}