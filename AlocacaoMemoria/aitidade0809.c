#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    //Declaração de variáveis
    int quantFunc,
        *quantPecas,
        quantPecasMaior;
        
    float   *salarios,
            somaSalarios = 0,
            maiorSalario = -1;
    
    char estudando;
    
    //Solicitar e validar funcionários. 
    do{
        printf("\nDigite a quantidade de funcionários da empresa: ");
        scanf("%i", &quantFunc);
        
        if (quantFunc <= 0) {
            printf("\nValor inválido.");
        }
        
    } while (quantFunc <= 0);
    
    //Alocação dinâmica. 
    quantPecas = (int*) malloc (quantFunc * sizeof(int)); //deixa lixo de memória. 
    salarios = (float*) calloc (quantFunc, sizeof(float)); //limpa a área de memória. 
    
    //Loop principal
    for (int i = 1; i <= quantFunc; i++) {
        printf("\n%iº Funcionário: ", i);
        //Solicitar e validar a quantidade de peças produzidas. 
        printf("\nDigite a quantidade de peças: ");
        scanf("%i", quantPecas);
        while (*quantPecas < 0) {
            printf("\nValor inválido.");
            printf("\nDigite a quantidade de peças: ");
            scanf("%i", quantPecas);
        }
        
        //Cálculo do salário. 
        if (*quantPecas <= 200) {
            *salarios = *quantPecas * 2;
        } else if (*quantPecas <= 400) { //} else if (*quantPecas > 200 && *quantPecas <= 400) { 
            *salarios = *quantPecas * 2.30;
        } else {
            *salarios = *quantPecas * 2.5;
        }
        
        //Calcular bônus. 
        estudando = 'P';
        while (estudando != 'S' && estudando != 'N') {
            printf("\nO funcionário está estudando (S/N) ? ");
            scanf(" %c", &estudando);
            estudando = toupper(estudando);
            
            if (estudando != 'S' && estudando != 'N') {
                printf("\nValor inválido. ");    
            }
        }
        
        if (estudando == 'S') {
            *salarios *= 1.1;
        }
        
        //Alterar o endereço de memória do ponteiro
        quantPecas++; //aritmética de ponteiro.
        salarios++; //aritmética
    }
    
    //Voltar a quantidade de espaços alterados na aritmética. 
    quantPecas -= quantFunc;
    salarios -= quantFunc;
    
    for (int i = 0; i < quantFunc; i++) {
        printf("\nFuncionário %i - Peças %i - Salário R$%.2f", 
                        i+1, quantPecas[i], salarios[i]);
        
        //Somar salários 
        somaSalarios += salarios[i];
        
        //Maior salário
        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
            quantPecasMaior = quantPecas[i];
        }
    }
    
    //Imprimir resultados finais. 
    printf("\nSoma dos salários da empresa R$%.2f", somaSalarios);
    printf("\nO maior salário pago é R$%.2f com %i peças produzidas.", maiorSalario, quantPecasMaior);
    
    //Liberar a área de memória alocada. 
    free(quantPecas);
    free(salarios);
    return 0;
}