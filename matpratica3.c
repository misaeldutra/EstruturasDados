#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3];
    int i,j,lin;

    printf("Informe os elementos da matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Elemento[%d][%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nInforme a linha: ");
    scanf("%d", &lin);

    if(lin < 0 || lin >= 3){
        printf("Linha invalida!!\n");
    }else{
        printf("Elementos da linha %d:\n", lin);
        for(j = 0; j < 4; j++){
            printf("%d ", mat[lin][j]);
        }
    }




    return 0;
}