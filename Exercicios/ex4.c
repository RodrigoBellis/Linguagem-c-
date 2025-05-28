
#include <stdio.h>  
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    
   int tamanho;;
   int escolhaPessoa;
   int escolhaComputador;
     
   printf("Quantas pessoas jogarão? ");
   scanf("%d", &tamanho);
  int opcao[tamanho];
  for(int i = 0 ; i < tamanho ; i++){
      printf("Pessoa %d, escolha:\n1 - Pedra\n2 - Papel\n3 - Tesoura\n", i + 1);
      scanf("%d", &opcao[i]);
      if(opcao[i] < 1 || opcao[i] > 3){
          printf("Opção inválida! Tente novamente.\n");
          i--; // Decrementa i para repetir a entrada
      }
  }

    srand(time(NULL));
    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3

    printf("Escolha do computador: %d\n", escolhaComputador);

    for(int i = 0 ; i < tamanho ; i++){
        if(opcao[i] == escolhaComputador){
            printf("Pessoa %d: Empate!\n", i + 1);
        } else if((opcao[i] == 1 && escolhaComputador == 3) || 
                  (opcao[i] == 2 && escolhaComputador == 1) || 
                  (opcao[i] == 3 && escolhaComputador == 2)){
            printf("Pessoa %d: Venceu!\n", i + 1);
        } else {
            printf("Pessoa %d: Perdeu!\n", i + 1);
        }
    }

    return 0;




  }

    
   


}   