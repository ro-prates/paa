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