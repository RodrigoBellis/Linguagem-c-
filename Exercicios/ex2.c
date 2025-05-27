#include <stdlib.h>
#include <stdio.h>

int main()
{
   
   int tamanho;
   int positivo = 0 ;
   int negativo = 0 ;
   int zero = 0;
   
   
   
   printf("Escreva o tamanho do vetor:\n");
   scanf("%i",&tamanho);
   
   
    int num[tamanho];
   for(int i = 0 ; i < tamanho ; i++){
       printf("Qual o valor do seu numero:\n");
       scanf("%i",&num[i]);
       if(num[i] == 0){
           zero++;
       }else if(num[i] > 0){
           positivo++;
       }else{
           negativo++;
       }
   }
   
   printf("Positivo:%i\n",positivo);
   printf("Negativo:%i\n",negativo);
   printf("Zero:%i\n",zero);
   
   
   
   

    return 0;
}
