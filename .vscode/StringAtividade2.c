#include<stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale( LC_ALL, "" );
     char string[20],
        string2 [20];
    printf("\nDigite Estrutura:");
  scanf(" %[^\n]",string);
   
    printf("\nDigite de Dados !");
  scanf(" %[^\n]",string2);
   strcat(string," ");
   strcat(string,string2);
   printf ("%s %s",string,string2);
   

    return 0;
}
