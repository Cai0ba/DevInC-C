#include <stdio.h>

int main()
{
  char letras[] = "PONTEIROS",
  *pontLetra = letras;
  printf("%c", *pontLetra);
   
   pontLetra++;
    *pontLetra = letras;
  printf("%c", *pontLetra);
   
    pontLetra += 4;
  printf("%c", *pontLetra);
  
   
    (*pontLetra) += 5;
  printf("%c", *pontLetra);
  
  
    pontLetra -= 2;
  printf("%c", *pontLetra);
  
    return 0;
}
