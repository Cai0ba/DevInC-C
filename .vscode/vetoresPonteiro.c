int main()
{
double salario[5] = {34.6,12,6,9,5} ;  
 double *pontSal = salario;
 for (int i = 0; i < 5; i++)
 {
  // printf("\n salario[%i] = %.2lf - %p",i,salario[i],&salario[i]);
   printf("\n salario[%i] = %.2lf - %p",i,*pontSal,pontSal);
 pontSal++;
 }
 printf("\n ponteiro final %p",pontSal);
 pontSal -= 5;//Aritmetica de ponteiros
  printf("\n Onde estou? %p",pontSal);
    return 0;
}
