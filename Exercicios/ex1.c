#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    int sexo;
    float maiorAltura = 0;
    float menorAltura = FLT_MAX;
    int numerosMulher = 0;
    float somaAlturaHomens = 0;
    float mediaAlturaHomens = 0;
    int numerosHomens = 0;
    int maiorIdadeMulher = 0;
    int menorIdadeHomem = INT_MAX;
    
    int quantidadeEntrevistados;
    
    printf("Digite a quantidade de entrevistados: ");
    scanf("%d", &quantidadeEntrevistados);
    
    float *altura = malloc(quantidadeEntrevistados * sizeof(float));
    int *idade = malloc(quantidadeEntrevistados * sizeof(int));
    
    for(int i = 0; i < quantidadeEntrevistados; i++) {
        printf("Digite 1 para mulher e 2 para homem: ");
        scanf("%d", &sexo);
        
        printf("Digite sua altura: ");
        scanf("%f", &altura[i]);
        
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
        
        if(sexo == 1) {
            numerosMulher++;
            if(idade[i] > maiorIdadeMulher) {
                maiorIdadeMulher = idade[i];
            }
        } else if(sexo == 2) {
            somaAlturaHomens += altura[i];
            numerosHomens++;
            if(idade[i] < menorIdadeHomem) {
                menorIdadeHomem = idade[i];
            }
        } else {
            printf("Opcao Invalida:\n");
        }
        
        if(altura[i] > maiorAltura) {
            maiorAltura = altura[i];
        }
        if(altura[i] < menorAltura) {
            menorAltura = altura[i];
        }
    }
    
    if(numerosHomens > 0) {
        mediaAlturaHomens = somaAlturaHomens / numerosHomens;
    }
    
    printf("\n--- RESULTADOS ---\n");
    printf("Maior altura do grupo: %.2f m\n", maiorAltura);
    printf("Menor altura do grupo: %.2f m\n", menorAltura);
    printf("Numero de mulheres entrevistadas: %d\n", numerosMulher);
    printf("Numero de homens entrevistados: %d\n", numerosHomens);
    printf("Media de altura dos homens: %.2f m\n", mediaAlturaHomens);
    printf("Maior idade entre as mulheres: %d anos\n", maiorIdadeMulher);
    printf("Menor idade entre os homens: %d anos\n", menorIdadeHomem);
    
    free(altura);
    free(idade);
    
    return 0;
}
