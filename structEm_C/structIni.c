#include <stdio.h>
//prototipos

typedef struct dadosendereco  dadosend; 
struct dadosendereco {

    char rua[20];
    int numero;
    char bairro[20];
    int cep;


};

struct dadosclientes {

    char nome[30];
    int idade;
    float salario;
    char genero;
    dadosend end;  //acessando uma struct dentro da outra 
};


//typedef (permite trocar o nome do tipo da variavel) 

// (typedef int inteiro;)  mudando de int para inteiro 



//enum (enumeração) Coloca uma sequencia numérica em itens restritos.(somente inteiros)

enum componentes{iphone  , ipad , computador, televisao, bateria};

char matrix [][20] = {

    "iphone",
    "ipad",
    "computador",
    "televisao",
    "bateria"


};


int main()
{
   //declaração de estrutura
   struct dadosclientes dados;
   struct dadosendereco dadosend;
   enum componentes referencia;
   //acessar um dos tipos da estrutura

   //usando stuct dadoscliente
   dados.idade = 20;
   printf("idade do cliente é %i ", dados.idade);



   //usando a struct dadosend
   dadosend.cep = 2000;

   printf("\ncep do aluno é %i", dadosend.cep);


   //utilizando a struct dadosclientes e puxando dela uma info da struct dadosend
   dados.end.numero = 35;
   printf("\no numero do aluno é  %i", dados.end.numero);



   //usando enum com um laço for para percorrer a matrix char

   for(referencia = iphone; referencia <= bateria; referencia++) {


        printf("\nnome do componente é %s", matrix[referencia]);



   }




   return 0;

   }