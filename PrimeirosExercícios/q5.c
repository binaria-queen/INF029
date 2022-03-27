//Ler a idade de uma pessoa e dizer se ela é maior de idade ou não

#include <stdio.h>
#include <stdlib.h>

int main(){
  int idade;

  printf("Quantos anos você tem? ");
  scanf("%d", &idade);

  if (idade < 18){
    printf("Você é menor de idade.");
  }else{
    printf("Parabéns! Você é maior de idade!");
  }
  
  return 0;
}