#include <stdio.h>
#include <stdlib.h>


int main(){
    int mat[3][3];
    int i,j;
    int lin, col;

    printf("Informe os elementos da matriz: \n");
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

    printf("\nInforme a linha e a coluna a excluir: ");
    scanf("%d %d", &lin, &col);

    if(lin >= 0 && lin < 3 && col >= 0 && col < 3){
        mat[lin][col] = 0;
        
    }
    else{
        printf("Posicao invalida!!\n");
    }

    printf("\nMatriz apos excluir: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}