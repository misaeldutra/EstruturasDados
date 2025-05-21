#include <stdio.h>
#include <stdlib.h>
//Imprimir  o segundo menor elemento da matriz;

int main(){
    int mat[3][3];
    int i,j;
    int menor, segundomenor;


    printf("Informe os elementos: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Elemento[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    menor = segundomenor = mat[0][0];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
    }

    int achei = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] != menor){
                if(!achei || mat[i][j] < segundomenor){
                    segundomenor = mat[i][j];
                    achei = 1;
                }
            }
        }
    }

    if(achei){
        printf("\nO segundo menor elemento = %d\n", segundomenor);
    } else{
        printf("\nTodos os elementos sao iguais! Nao ha segundo menor!\n");
    }

    return 0;
}