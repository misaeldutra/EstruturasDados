#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[3][4];
    int i,j;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nA matriz gerada:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nCanto superior esquerdo: %d", mat[0][0]);
    printf("\nCanto inferior direito: %d", mat[2][3]);


    return 0;
}