/*
Atualmente existe uma grande variedade de moedas digitais para se realizar simples transações on-line ou até
mesmo para guardar reserva de valor. Entre esses diferentes tipos de moedas, existem desde criptomoedas
descentralizadas até mesmo moedas digitais que são controladas por bancos centrais de certos países. Para muitas
dessas moedas, existe um grande custo computacional para se processar as transações realizadas pelos usuários da
moeda devido à dificuldade computacional de se realizar as devidas verificações para que essas transações sejam
processadas corretamente.
Uma nova moeda digital que veio para competir com as moedas digitais existentes, a Power2coin
(PW2C), criada por uma comunidade de cientistas da computação que propõem uma mudança de paradigma para
se reduzir a quantidade de energia gasta nas transações e para se distribuir o seu custo utilizando a capacidade
ociosa de processamento de equipamentos dos próprios participantes nas transações dessas moedas digitais
existentes, mas que pode possivelmente implicar em transferências de maior volume de dados por transação.
Como o protocolo usado em Power2coin torna o processamento de transações mais simples e rápido, o gasto
energético para a manutenção da rede pode ser reduzido de forma que simples equipamentos como smartphones
dos próprios usuários que realizam a transação podem ser utilizados para fazer o processamento das suas próprias
transações sem a necessidade de nós adicionais na rede processando as transações de terceiros.
Como em outras moedas digitais, as moedas de Power2coin podem ser guardadas em carteiras digitais em
que o valor total é a soma de todas as moedas guardadas. Para se realizar uma transferência de valor na rede de
uma carteira A (origem) para uma carteira B (destino), são criadas novas moedas a partir da carteira A em valores
que são sempre potência de 2 e em valores distintos, sendo que o volume de dados transferidos é proporcional à
quantidade de moedas transacionadas. Por exemplo, para se realizar um pagamento no valor de 30 PW2C de uma
carteira A para outra carteira B, é possível criar 4 moedas de valores 2, 4, 8 e 16 PW2C cada em A e enviá-las
para B. Outra forma seria, por exemplo, a partir da carteira A, criar-se uma moeda de valor 32 PW2C e enviá-la
para B, além de criar-se uma moeda de 2 PW2C a partir da carteira B e enviá-la para A de forma que, no balanço
após a transação, A terá pago 30 PW2C para B.
Como o custo para se realizar as transações pelo protocolo utilizado pela Power2coin é relativo à
quantidade de moedas transacionadas entre as partes, então o objetivo é, dado o valor em PW2C a ser pago,
encontrar a menor quantidade de moedas que devem ser transferidas em ambas as direções entre os usuários em
uma dada transação. No exemplo dado anteriormente deve-se escolher a segunda opção em que são transferidas 2
ao invés de 4 moedas da primeira opção, de forma a se minimizar o volume de dados transferidos na rede. Para
que a Power2coin possa ser efetivamente utilizada na prática, é necessário primeiro que um novo aplicativo seja
desenvolvido para se determinar no início de uma transação qual é a quantidade mínima de moedas a serem
criadas e transferidas na rede dado o valor a ser pago a partir de uma dada carteira. Então, a sua tarefa é a de
projetar um algoritmo eficiente e implementar um programa para resolver esse problema. Devido às restrições de
capacidade de processamento e a necessidade de se ter transações concluídas rapidamente, é necessário que essa
resposta seja fornecida em curto espaço de tempo. Você pode assumir que o valor a ser enviado já existe na
carteira de origem e que os valores de moedas específicas armazenadas nessa carteira que correspondem ao saldo
antes da transação não precisam ser verificados, pois havendo saldo suficiente na carteira o software da carteira
digital é capaz de criar novas moedas e fazer os ajustes necessários. Considerando que a carteira B de destino
sempre recebe um valor maior do que envia, pois só é possível pagar valores que são inteiros positivos na rede, a
carteira B pode, se necessário para que a transação de fato ocorra, criar temporariamente, enquanto a transação
estiver ocorrendo, moedas para o “troco” em valor, inclusive maior do que o existe em seu saldo pré-transação.
Além das moedas criadas a partir de outras pré-existentes em mesmo valor para se realizar as transferências, é
necessário que essas moedas pré-existentes tenham sido criadas em algum momento no passado para existirem na
rede. Portanto, o sistema considera também como política de expansão monetária uma atribuição de pontos para
ambos os usuários de cada transação, o que os seus criadores chamaram de “cash back mútuo”, ou seja, novas
unidades de PW2C são adicionadas às carteiras digitais após uma certa quantidade de pontos ser atingida como
uma forma de incentivar o maior uso da Power2coin, assim como aumentar e manter em elevado nível a
velocidade da moeda enquanto a oferta de moeda é aumentada.

Entrada:
A entrada contém uma única linha que apresenta o valor N (1 ≤ N ≤ 10.000) do valor a ser pago na
transação em PW2C.

Saída:
Imprima uma linha com a quantidade mínima de moedas a serem transacionadas para se realizar o
pagamento no valor de N.

Entrada 1:
8

Saída 1:
1

Entrada 2:
30

Saída 2:
2

Entrada 3:
100

Saída 3:
3

Entrada 4:
999

Saída 4:
4
*/

#include <stdio.h>

int main(){
    int valores[15] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    int i, n;
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12;
	int v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23;
	int v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34;
	int v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45; 
	int v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56;
    int v57, v58, v59, v60, v61, v62; 

    scanf("%d", &n);

    //com uma moeda
    for(i=0; i<15; i++){
        if(n == valores[i]){
            printf("1");
			return 0;
        }
    }

    //com duas moedas
    for(i=0; i<15; i++){
        if(n < valores[i]){
           break;
        }
    }

    v1 = valores[i] - n;
    v2 = n - valores[i-1];

    for(i=0; i<15; i++){
        if(v1 == valores[i] || v2 == valores[i]){
            printf("2");
			return 0;
        }
    }

    //com três moedas
    for(i=0; i<15; i++){
        if(v1 < valores[i]){
           break;
        }
    }

    v3 = valores[i] - v1;
    v4 = v1 - valores[i-1];

    for(i=0; i<15; i++){
        if(v2 < valores[i]){
           break;
        }
    }

    v5 = valores[i] - v2;
    v6 = v2 - valores[i-1];

    for(i=0; i<15; i++){
        if(v3 == valores[i] || v4 == valores[i] || v5 == valores[i] || v6 == valores[i]){
            printf("3");
			return 0;
        }
    }

	//com quatro moedas
	for(i=0; i<15; i++){
        if(v3 < valores[i]){
           break;
        }
    }

    v7 = valores[i] - v3;
    v8 = v3 - valores[i-1];

	for(i=0; i<15; i++){
        if(v4 < valores[i]){
           break;
        }
    }

    v9 = valores[i] - v4;
    v10 = v4 - valores[i-1];

	for(i=0; i<15; i++){
        if(v5 < valores[i]){
           break;
        }
    }

    v11 = valores[i] - v5;
    v12 = v5 - valores[i-1];

	for(i=0; i<15; i++){
        if(v6 < valores[i]){
           break;
        }
    }

    v13 = valores[i] - v6;
    v14 = v6 - valores[i-1];

	for(i=0; i<15; i++){
        if(v7 == valores[i] || v8 == valores[i] || v9 == valores[i] || v10 == valores[i]
		|| v11 == valores[i] || v12 == valores[i] || v13 == valores[i] || v14 == valores[i]){
            printf("4");
			return 0;
        }
    }

	//com cinco moedas
	for(i=0; i<15; i++){
        if(v7 < valores[i]){
           break;
        }
    }

    v15 = valores[i] - v7;
    v16 = v7 - valores[i-1];

	for(i=0; i<15; i++){
        if(v8 < valores[i]){
           break;
        }
    }

    v17 = valores[i] - v8;
    v18 = v8 - valores[i-1];

	for(i=0; i<15; i++){
        if(v9 < valores[i]){
           break;
        }
    }

    v19 = valores[i] - v9;
    v20 = v9 - valores[i-1];

	for(i=0; i<15; i++){
        if(v10 < valores[i]){
           break;
        }
    }

    v21 = valores[i] - v10;
    v22 = v10 - valores[i-1];

	for(i=0; i<15; i++){
        if(v11 < valores[i]){
           break;
        }
    }

    v23 = valores[i] - v11;
    v24 = v11 - valores[i-1];

	for(i=0; i<15; i++){
        if(v12 < valores[i]){
           break;
        }
    }

    v25 = valores[i] - v12;
    v26 = v12 - valores[i-1];

	for(i=0; i<15; i++){
        if(v13 < valores[i]){
           break;
        }
    }

    v27 = valores[i] - v13;
    v28 = v13 - valores[i-1];

	for(i=0; i<15; i++){
        if(v14 < valores[i]){
           break;
        }
    }

    v29 = valores[i] - v14;
    v30 = v14 - valores[i-1];

	for(i=0; i<15; i++){
        if(v15 == valores[i] || v16 == valores[i] || v17 == valores[i] || v18 == valores[i]
		|| v19 == valores[i] || v20 == valores[i] || v21 == valores[i] || v22 == valores[i]
		|| v23 == valores[i] || v24 == valores[i] || v25 == valores[i] || v26 == valores[i]
		|| v27 == valores[i] || v28 == valores[i] || v29 == valores[i] || v30 == valores[i]){
            printf("5");
			return 0;
        }
    }

	//com seis moedas
	for(i=0; i<15; i++){
        if(v15 < valores[i]){
           break;
        }
    }

    v31 = valores[i] - v15;
    v32 = v15 - valores[i-1];

	for(i=0; i<15; i++){
        if(v16 < valores[i]){
           break;
        }
    }

    v33 = valores[i] - v16;
    v34 = v16 - valores[i-1];

	for(i=0; i<15; i++){
        if(v17 < valores[i]){
           break;
        }
    }

    v35 = valores[i] - v17;
    v36 = v17 - valores[i-1];

	for(i=0; i<15; i++){
        if(v18 < valores[i]){
           break;
        }
    }

    v37 = valores[i] - v18;
    v38 = v18 - valores[i-1];

	for(i=0; i<15; i++){
        if(v19 < valores[i]){
           break;
        }
    }

    v39 = valores[i] - v19;
    v40 = v19 - valores[i-1];

	for(i=0; i<15; i++){
        if(v20 < valores[i]){
           break;
        }
    }

    v41 = valores[i] - v20;
    v42 = v20 - valores[i-1];

	for(i=0; i<15; i++){
        if(v21 < valores[i]){
           break;
        }
    }

    v43 = valores[i] - v21;
    v44 = v21 - valores[i-1];

	for(i=0; i<15; i++){
        if(v22 < valores[i]){
           break;
        }
    }

    v45 = valores[i] - v22;
    v46 = v22 - valores[i-1];

	for(i=0; i<15; i++){
        if(v23 < valores[i]){
           break;
        }
    }

    v47 = valores[i] - v23;
    v48 = v23 - valores[i-1];

	for(i=0; i<15; i++){
        if(v24 < valores[i]){
           break;
        }
    }

    v49 = valores[i] - v24;
    v50 = v24 - valores[i-1];

	for(i=0; i<15; i++){
        if(v25 < valores[i]){
           break;
        }
    }

    v51 = valores[i] - v25;
    v52 = v25 - valores[i-1];

	for(i=0; i<15; i++){
        if(v26 < valores[i]){
           break;
        }
    }

    v53 = valores[i] - v26;
    v54 = v26 - valores[i-1];

	for(i=0; i<15; i++){
        if(v27 < valores[i]){
           break;
        }
    }

    v55 = valores[i] - v27;
    v56 = v27 - valores[i-1];

	for(i=0; i<15; i++){
        if(v28 < valores[i]){
           break;
        }
    }

    v57 = valores[i] - v28;
    v58 = v28 - valores[i-1];

	for(i=0; i<15; i++){
        if(v29 < valores[i]){
           break;
        }
    }

    v59 = valores[i] - v29;
    v60 = v29 - valores[i-1];

	for(i=0; i<15; i++){
        if(v30 < valores[i]){
           break;
        }
    }

    v61 = valores[i] - v30;
    v62 = v30 - valores[i-1];

	for(i=0; i<15; i++){
        if(v31 == valores[i] || v32== valores[i] || v33 == valores[i] || v34 == valores[i]
		|| v35 == valores[i] || v36 == valores[i] || v37 == valores[i] || v38 == valores[i]
		|| v39 == valores[i] || v40 == valores[i] || v41 == valores[i] || v42 == valores[i]
		|| v43 == valores[i] || v44 == valores[i] || v45 == valores[i] || v46 == valores[i]
		|| v47 == valores[i] || v48 == valores[i] || v49 == valores[i] || v50 == valores[i]
		|| v51 == valores[i] || v52 == valores[i] || v53 == valores[i] || v54 == valores[i]
		|| v55 == valores[i] || v56 == valores[i] || v57 == valores[i] || v58 == valores[i]
		|| v59 == valores[i] || v60 == valores[i] || v61 == valores[i] || v62 == valores[i]){
            printf("6");
			return 0;
        }
    }

	printf("7");
    return 0;
}