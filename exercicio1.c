/*
Cristiano, um aluno curioso de matemática, notou que para todo número inteiro par maior que 2 que ele testou
manualmente existe alguma forma de expressá-lo como a soma de dois números primos. Como Cristiano não
sabe provar que a propriedade é válida para todo número maior que 2 e também não sabe programar, ele pediu a
sua ajuda para escrever um programa para contar o número de pares de números primos cuja soma é igual a um
número N (N<1.000.000).
Um número natural P, maior que 1, é um número primo se é divisível apenas por dois números positivos: 1 e P.
Por exemplo, os 6 menores números primos são: 2, 3, 5, 7, 11 e 13. Desta forma, para N=16, podemos expressar
através de duas somas de primos: 3+13 e 5+11.

Entrada
A entrada consiste de um número inteiro N (3 < N < 1.000.000) par.

Saída
Você deve imprimir o número de pares de primos que somados resultam em N. Note que 3+5=8 e 5+3=8 são o
mesmo par. Você deve contar o número de pares distintos.

Entrada 1:
4

Saída 1:
1

Entrada 2:
12

Saída 2:
1

Entrada 3:
44

Saída 3:
3

Entrada 4:
16

Saída 4:
2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int primo(int n){ // função que verifica se o valor é primo
    int i;
    for(i=3; i<=ceil(sqrt(n)); i+=2){ // é necessário fazer os testes até a raiz quadrada do valor, não é necessário testar todos os números
        if(n%i==0){
            return 0; // caso tenha algum divisor, o retorno 0 demonstra que tal número não é primo
        }
    }
    return 1;
}
 
int main(){
    int j, quantidade = 0, numero, b;
    scanf("%d", &numero);
 
    if(numero == 4){
        printf("1");
        return;
    }
 
    for(j=3; j<numero; j+=2){ // o incremento é de 2 em 2 porque o único primo par que existe é o 2
        if(primo(j)){ // caso o j seja primo
            b = numero - j; // um valor de b é gerado
            if(primo(b) && j <= b){ // basta verificar se o valor de b também é primo
                quantidade++; // a quantidade será incrementada em 1
            }
        } 
    }
 
    printf("%d", quantidade);
 
    return 0;
}