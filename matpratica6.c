#include <stdio.h>
#include <stdlib.h>
//Encontra a trasposta;

int main(){
    int mat[3][3];
    
    int i,j;

    printf("Informe os elementos: \n");
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

     printf("\nMatriz transposta: \n");
     for(j = 0; j < 3; j++){
        for(i = 0; i < 3; i++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
     }



    return 0;
}