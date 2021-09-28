#include <stdio.h>
#include<stdlib.h>
// Avisar ao codigo que a função tem essa assinatura
//Protótipos

int somarvalores(int , int );
float calcularsalario(int percentual, double salario);
int main()
{
  float salario = 134.56;
   int idade = 23;
   printf("23 + 5 = %d ", somarvalores(23,5));
    return 0;
}
void mensagem(){
printf("\nOlá Mundo!\n");
}
int somarvalores(int x , int y){
mensagem();
return x + y;
}
float calcularsalario(int percentual, double salario){
if(salario > 5000){
    salario = salario * percentual / 100;
    return salario;
}

}
