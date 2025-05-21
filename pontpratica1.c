#include <stdio.h>
#include <stdlib.h>

void trocavalores(int *A, int *B){
    int aux;

    aux = *A;
    *A = *B;
    *B = aux;
}

int main(){
    int A,B;

    printf("\nInforme o valor 1: ");
    scanf("%d", &A);
    printf("\nInforme o valor 2: ");
    scanf("%d", &B);

    printf("\nAntes da troca: \n");
    printf("o valor de A = %d e o valor de B = %d\n", A,B);

    trocavalores(&A,&B);

    printf("\nDepois da troca: \n");
    printf("O valor de A = %d e o valor de B = %d\n", A,B);


    return 0;
}