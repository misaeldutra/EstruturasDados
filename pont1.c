#include <stdio.h>
#include <stdlib.h>
//*p1 = *p2;

//p++; p--; ponteiro;

//(*p)++; Incrementando o conteudo da variavel apontada pelo ponteiro;

//vet_notas[0]==*(pont_notas);
//vet_notas[1]==*(pont_notas+1);
//vet_notas[2]==*(pont_notas+2);

float ProdutoEscalar(float u[], float v[], int n);

int main(){
    int i,n;
    
    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &n);
    
    float u[n], v[n];

    printf("Informe os elementos do vetor u: \n");
    for(i = 0; i < n; i++){
        printf("u[%d] = ",i);
        scanf("%f", &u[i]);
    }

    printf("\nInforme os elementos do vetor v: \n");
    for(i = 0; i < n; i++){
        printf("v[%d] = ",i);
        scanf("%f", &v[i] );
    }

    float result = ProdutoEscalar(u,v,n);

    printf("\nProduto  escalar = %.2f\n", result);



    return 0;
}

float ProdutoEscalar(float u[], float v[], int n){
    float res = 0;
    int i;

    for(i = 0;  i < n;i++ ){
        res = res + u[i] * v[i];
    }

    return res;
}