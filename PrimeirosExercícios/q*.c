#include <stdio.h>
//calculando fatorial de 5
int main()
{
  int fatorial = 5;
  int resposta = 1;

  for( ;fatorial >= 1 ; --fatorial){
    resposta *= fatorial;
  }
  printf("O numero fatorial e' %i\n", resposta);


  
  return 0;
}