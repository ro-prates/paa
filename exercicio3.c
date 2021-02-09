/*
Uma agência de relacionamentos está planejando um novo serviço para formação de casais entre os participantes
através de um tipo inovador de evento. Neste evento, cada participante teria a chance de conhecer os outros
participantes do evento. Devido a questões de ideologia de gênero, a agência decidiu não fazer a divisão dos
participantes entre participantes do sexo masculino ou feminino e permitirá que todos se conheçam no evento
livremente.
Após a etapa inicial em que os participantes conhecem outros participantes, cada um deve indicar secretamente
em um papel um nome de outro participante que mais lhe despertou interesse no evento.
Para uma segunda etapa do evento, a agência pretende formar um subgrupo com alguns dos participantes iniciais
de forma que todos neste subgrupo tenham sido indicados por outro participante também neste subgrupo, ou seja,
cada convidado neste subgrupo foi indicado por outra pessoa neste mesmo subgrupo. A escolha dos participantes
neste subgrupo de participantes a serem convidados para a segunda etapa do evento deve ser feita de forma que o
número de participantes nesta segunda etapa seja o maior possível para que o evento consiga formar o maior
número possível de casais ao término do evento. A agência acredita que as pessoas que restarem para a segunda
etapa são as únicas que ainda têm chance de encontrar um parceiro/parceira no evento. A sua tarefa é determinar
os participantes a serem convidados para a segunda etapa de certos eventos conforme as regras propostas pela
agência.

Entrada:
A entrada se inicia com uma linha contendo o número inteiro N (2 ≤ N ≤ 100.000) de participantes de um
evento. Cada participante é identificado por um número entre 1 e N. Em cada uma das próximas N linhas, serão
apresentados dois identificadores a e b para representar que a pessoa b foi indicada por outra pessoa a.

Saída:
Imprima uma linha com os identificadores das pessoas a serem convidadas para a segunda etapa do
evento em ordem crescente. Imprima um espaço em branco entre 2 participantes.

Entrada 1:
4
1 2
2 1
3 1
4 3 

Saída 1:
1 2

Entrada 2:
7
1 3
2 1
3 1
4 5
5 3
6 4
7 6 

Saída 2:
1 3

Entrada 3:
4
1 2
2 3
3 1
4 2

Saída 3:
1 2 3
*/

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