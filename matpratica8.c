#include <stdio.h>
#include <stdlib.h>
// Definindo zero na matriz triangular inferior;

int main(){
    int mat[3][3];
    int i,j;

    printf("Informe os Elementos: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nZerando elementos triangular inferior: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i <= j){
                printf("%d ", mat[i][j]);
            } else{
                printf("%d ", 0);
            }
        }
        printf("\n");
    }

    return 0;
}