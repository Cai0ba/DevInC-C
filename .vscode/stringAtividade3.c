#include<stdio.h>
int main()
{
 char string1 [20];
  char string2 [20];
 printf("Digite algo:");
   scanf(" %[\^n]",string1);
    printf("Digite algo:");
   scanf(" %[\^n]",string2);

 
 if(strcmp(string1,string2)>= 0){
printf("Strings em ordem: %s e %s",string2,string1);

 }else{
 printf("Strings em ordem: %s e %s",string2,string1);
 }
 
 
 
  
    
  
    return 0;
}
