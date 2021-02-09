#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
 
int main(){
    int numero, i, controle=1, A[MAX], B[MAX],*contador;
 
    scanf("%d",&numero); //quantidade de pessoas
    contador = (int*)calloc(numero,sizeof(int));

    for(i=0; i<numero; i++){
        scanf("%d", &A[i]); //pessoa que convida
        scanf("%d", &B[i]); //pessoa que foi convidada
        contador[B[i]-1] = contador[B[i]-1] + 1; //controle de pessoas que foram indicadas
    }
 
    while(controle==1){
        i=0;
        controle = 0;
        while(i < numero){
            if(contador[i]==0){ //caso a pessoa não tenha sido indicada por ninguém
                contador[i] = -1; //contador fica negativo para saber que já foi removido
                contador[B[i]-1]--; //diminui a quantidade de candidatos
                controle=1; //para que a verificação continue
            }
            else i++;
        }
    }
 
    printf("\n");
    for(i=0; i<numero; i++){        
        if(contador[i]!=-1){
            printf("%d ",A[i]); //exibe apenas os candidatos que foram indicados
        }
    }

    return 0;
}