/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main ()
{
  //DeclaraC'C#o de variavel comum
  int idade;

  //DeclaraC'C#o de ponteiros
int *pontIdade = &idade;//Atribui o endereço de memoria para o ponteiro
//Apontamneto com scanf

printf("\n Idade:");//Forma Classica
//scanf("%d,&idade");
scanf("%d,pontIdade");
printf("\n Conteudo da variável idade é %i ",idade);

// Testes
printf("\nEndereço de memoria da variavel idade %p",&idade);
printf("\nEndereço de memoria da variavel pontIdade %p",&pontIdade);

//Conteudo das variáveis

//idade = 5;//Forma Classica(Direta)
*pontIdade = 5;
printf("\n Conteudo da variável idade é %i ",idade);
printf("\n Conteudo da variável idade é %i ",*pontIdade);

  return 0;
}
