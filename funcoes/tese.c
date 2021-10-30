#include <stdio.h>
#include <stdlib.h>


//Novos tipos
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


//Protótipos
void menu();
void validarNumero(unionInfo *op, char *frase);
void calcularFibonacci(unionInfo *op, strDados *dados);
void calcularFatorial(unionInfo *op, strDados *dados);
void imprimirStruct(unionInfo *op, strDados *dados, int tipo);

//Funções
int main(){
    menu();
    return 0;
}

void menu(){
    unionInfo op;
    int opAux;
    strDados dadosCompleto;
    dadosCompleto.pontVetor = NULL;
    do{
        printf("\n1 - Fatorial"
                "\n2 - Fibonacci"
                "\n3 - Finalizar"
                "\nDigite sua opção: ");
        scanf("%d", &op.opMenu);
        opAux = op.opMenu;
        
        switch (op.opMenu) {
            case fatorial:
                validarNumero(&op, "Número para calcular fatorial: ");
                calcularFatorial(&op, &dadosCompleto);
                break;
            case fibonacci:
                validarNumero(&op, "Termo de fibonacci a ser calculado: ");
                calcularFibonacci(&op, &dadosCompleto);
                break;
            case finalizar:
                printf("\nPrograma finalizado.");
                break;
            default:
                printf("\nOpção inválida.");
        }
        
    } while (opAux != finalizar);
}

void validarNumero(unionInfo *op, char *frase){
    int valorMinimo = (op->opMenu == fibonacci) ? 1 : 0;
    /*if para substituir o ternário
        if (op->opMenu == fibonacci) {
            valorMinimo = 1;
        } else {
            valorMinimo = 0;
        }
    */
    
    printf("\n%s", frase);
    scanf("%d", &op->numero);
    while (op->numero < valorMinimo) {
        printf("\n%s", frase);
        scanf("%d", &op->numero);
    }
}

void calcularFibonacci(unionInfo *op, strDados *dados){
    if (dados->pontVetor) { // if (dados->pontVetor != NULL) {
        free(dados->pontVetor);
    }
    dados->pontVetor = (int*) malloc (op->numero * sizeof(int));
    
    //Preencher o pontVetor
    for (int i = 0; i < op->numero; i++) {
        if (i <= 1) {
            dados->pontVetor[i] = i;
        } else {
            dados->pontVetor[i] = dados->pontVetor[i-1] + dados->pontVetor[i-2];
        }
    }
    dados->resultado = dados->pontVetor[op->numero - 1];
    imprimirStruct(op, dados, fibonacci);
}

void calcularFatorial(unionInfo *op, strDados *dados){
    if (dados->pontVetor) { // if (dados->pontVetor != NULL) {
        free(dados->pontVetor);
    }
    dados->pontVetor = (int*) malloc (op->numero * sizeof(int));
    
    dados->resultado = 1;
    dados->pontVetor[0] = 1;
    
    //Preencher o pontVetor
    for (int i = 2; i <= op->numero; i++) {
        dados->resultado *= i;
        dados->pontVetor[i-1] = dados->resultado;
    }
    imprimirStruct(op, dados, fatorial);
}

void imprimirStruct(unionInfo *op, strDados *dados, int tipo){
    (tipo == fibonacci) ? 
        printf("\nResultado %dº termo de Fibonacci = %d", op->numero, dados->resultado) :
        printf("\nResultado do fatorial de %d = %d", op->numero, dados->resultado);
    /*
    if (tipo == fibonacci) {
        printf("\nResultado %dº termo de Fibonacci = %d", op->numero, dados->resultado) :
    } else {
        printf("\nResultado do fatorial de %d = %d", op->numero, dados->resultado);
    }
    */
    for (int i = 0; i < op->numero; i++) {
        printf("\n%dº - %d", i+1, dados->pontVetor[i]);
    }
}
