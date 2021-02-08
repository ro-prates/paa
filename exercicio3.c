#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
 
int main(){
    int numero, j=0, i, controle=1;
    int cont=0 ,cont2=0 ,A[MAX], B[MAX];
    int *contador;
 
    scanf("%d",&numero); //quantidade de pessoas
    contador = (int*)calloc(numero,sizeof(int));

    for(i=0; i<numero; i++){
        scanf("%d", &A[i]);
        scanf("%d", &B[i]);
        contador[B[i]-1] = contador[B[i]-1] + 1;
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
        if(contador[i]!=-1)
            // printf("%d ",A[i]); //exibe apenas os candidatos que foram indicados
    }

    return 0;
}