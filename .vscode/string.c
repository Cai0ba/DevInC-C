#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
  char letra = 'A';
//caractere
    printf("\n%c - %d", letra);
  
 //Strings
  //Uma string é um vetor de char finalizado com \0
  char string [20] = "Teste de string";

  printf("Digite uma string");
 // fgets(string, 20, stdin);
 scanf("%[\^n]",string);
    return 0;
}
