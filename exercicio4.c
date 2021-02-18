#include <stdio.h>

int main(){
    int valores[15] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384};
    int i, n;
    int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12;

    scanf("%d", &n);

    //com uma moeda
    for(i=0; i<15; i++){
        if(n == valores[i]){
            printf("1");
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
        }
    }

    return 0;
}