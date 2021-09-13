#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *x;
x = (int*) malloc (sizeof (int));
printf("\n Conteudo do ponteiro x %p endereco de x %p", x, &x);
 *x = 50;
  printf("\n conteudo da apontada por x %i",*x);
  
  char *c;
  c = (char*) malloc(3);
for (int i = 1 ; i <= 3; i++)// Aritmetica de ponteiros
{
 *c = 'A' + i;
printf("\n o conteudo da apontada %c e conteudo do ponteiro %p",*c,c);
c++;
}
printf("\nOnde esta meu ponteiro? %p",c);

// c-=3;
printf("\nOnde esta meu ponteiro? %p",c);

// Alocar 5 double

double *y = (double*) malloc(5 * sizeof(double));
for (int i = 0; i < 5; i++)
{
    y[i] = 10.45 * i;
    printf("\n Conteudo da apontada %.2lf e o conteudo do ponteiro %p", y[i],&y[i]);
}
// Liberar espaço de memoria
//free(x);
//free(c);
//free(y);

// ALocar 3 float
printf("\n\n\n");
float *px = (float * ) calloc(30, sizeof(float));
for (int i = 0; i <= 30; i++)
{
   *px = 34.8;
   printf("\n Conteudo da apontada %.2lf e o conteudo do ponteiro %p",*px,px);
px++;
}
px-=30;

  
   return 0;
}
