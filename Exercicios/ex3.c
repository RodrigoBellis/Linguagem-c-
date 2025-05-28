#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char nome[100];
    int contador = 0 ;
    
    
    printf("Escreva seu nome:\n");
    fgets(nome,100,stdin);
    
    while(strcmp(nome, "FIM\n") != 0){
        for(int i = 0 ; i < strlen(nome) ; i++){
            if(isupper (nome[i])){
                contador++;
            }
        }
        
        printf("Letras maiuscula %i\n",contador);
        contador = 0 ;
        printf("Escreva seu nome:\n");
    fgets(nome,100,stdin);
        
    }
    
    
    
    
    
    

    return 0;
}