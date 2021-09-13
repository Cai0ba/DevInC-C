#include<stdio.h>
int main()
{
   char string[20];
    char string2[20];
  printf("\nDigite uma String:");
   scanf(" %[^\n]",string);
  printf("\nDigite uma String:");
   scanf(" %[^\n]",string2);
  strcpy(string2,string);
  printf("\n A inversão foi: %s e %s",string,string2);
  
  
    return 0;

}
