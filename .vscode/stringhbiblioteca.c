#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
char string[20] = "Caio Silva";
int tamanho = strlen(string);
printf("O tamanho da string %s é %d", string, tamanho);
  
  printf("Digite uma nova string");
  scanf("%[^\n]",string);
  printf("Tamanho da string é %s é %i",string, strlen(string));
    return 0;
}
