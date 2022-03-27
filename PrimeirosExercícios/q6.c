// saber se um numero é primo

#include <stdio.h>
#include <locale.h>

int main(){
  setLocale(LC_ALL, "");
  int num, i, resultado =0;

  printf("Digite um numero: ");
  scanf("%d", &num);

  for(i = 2, i <= num; i++){
    if(num % 1 == 0){
      resultado ++;
      break;
    }
  }
}

if(resultado == 0)
  printf("%d é um numero primo\n", num;
else 
  printf("%d não é um numero primo\n",num");



return 0;
