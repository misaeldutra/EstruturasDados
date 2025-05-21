#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat1[2][2];
    int mat2[2][2];
    int i,j;

    printf("Informe os elementos da primeira matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nInforme os elementos da segunda matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nprimeira matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n segunda matriz: \n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das matrizes:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}