int main(int argc, char const *argv[])
{
 int idade[5];
 char letra[]= {'A','M'};
  float salario[2]; 
  double preco[1];
//Atribui valor
idade[2]= 12;
  
  //Comando de entrada 
printf("Digite o primeiro salario: \n");
  scanf("%f",&salario[0]);
//Comando de saida
 
 printf("\nR$ %.2f",salario[0]);
  //Percorrer um vetor inteiro
for (int i = 0; i < 5; i++)
{
    printf("\nDigite a %d idade",i+1);
    scanf("%i",&idade[i]);
printf("\n%i",idade[i],&idade[i]);
printf("\nEndereço de memoria da primeira posição %p", idade[i]);
}
//matriz

int idades[5][3];
char alfa[][3] = {'A','b','c','d'}; 

//Atribui valor
idades[3][0] = 23;

//Percorrer uma matriz

for (int i = 0; i < 5; i++)
{
for (int c = 0; c < 3; c++)
{
 printf("\n Digite o matriz [%d][%d]",i,c);
scanf("%i",&idades[i][c]);
}

}

    return 0;



}
