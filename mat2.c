#include <stdio.h>
#include <stdlib.h>
//Percorrendo a Diagonal Principal: mat[i][i];

//Percorrendo a Diagonal Secundaria: mat[i][j - 1 - i];

int main(){
    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j;

    printf("Os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nOs elementos da diagonal principal: \n");
    for(i = 0; i < 3; i++){
       printf("%d ", mat[i][i]);
    }

    printf("\n\nOs elementos da diagonal secundaria:\n");
    for(i = 0; i < 3; i++){
        printf("%d ", mat[i][j - 1 - i]);
    }



    return 0;
}