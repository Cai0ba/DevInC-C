#include<stdio.h>
#include <locale.h>
int main()
{
    setlocale( LC_ALL, "Portuguese" );
     char string[20],
        string2 [20];
    printf("\nDigite uma string:");
  scanf(" %[^\n]",string);
   
    printf("\nDigite uma nova string:");
  scanf(" %[^\n]",string2);
   
   printf("Você digitou: %s e %s", string , string2);

    return 0;
}
