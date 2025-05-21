#include <stdio.h>
#include <stdlib.h>
//Encontrar o elemento majoritario;

int main() {
    int mat[3][3];
    int i, j, cont;
    int maior_cont = 0;
    int majoritario = 0;

    printf("Informe os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cont = 0;
            // Contar quantas vezes mat[i][j] aparece
            for(int x = 0; x < 3; x++) {
                for(int y = 0; y < 3; y++) {
                    if(mat[x][y] == mat[i][j]) {
                        cont++;
                    }
                }
            }

            if(cont > maior_cont) {
                maior_cont = cont;
                majoritario = mat[i][j];
            }
        }
    }

    if(maior_cont > (3*3)/2) {
        printf("Elemento majoritario: %d\n", majoritario);
    } else {
        printf("Nao existe elemento majoritario.\n");
    }

    return 0;
}