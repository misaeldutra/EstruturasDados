#include <stdio.h>
#include <stdlib.h>
//Soma dos elementos da diagonal principal:

int main(){
    int mat[3][3];
    int i,j, somadiagonal = 0;


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

            if(i == j){
                somadiagonal = somadiagonal + mat[i][j];
            }

        }
        printf("\n");
    }



    printf("\nA soam dos elementos da diagonal principal: %d\n", somadiagonal);

    return 0;
}