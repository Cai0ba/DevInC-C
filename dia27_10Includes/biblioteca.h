//Itens que serão disponibilizados pela biblioteca
//Bibliotecas necessarias
//Declarações ghlobais(typedef,struct,enm e union)
//Constantes e macros
//prototipos
#include <stdio.h>
enum opcoes{fatorial = 1, fibonacci, finalizar};

typedef union info unionInfo;
union info{
  int opMenu;
  int numero;
};

typedef struct dados strDados;
struct dados{
    int resultado;
    int *pontVetor;
};

//Prototipos
void menu();