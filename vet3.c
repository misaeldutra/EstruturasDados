#include <stdio.h>
#include <stdlib.h>
//Obs: em C, não existe declaração de vetor dinamico! O tamanho do vetor tem ser determinado em tempo de compilação.

//Imprimir a ordem inversa dos elementos do vetor:
int main(){
    int vetor[5] = {10,20,30,40,50};
    int i;

    printf("\nVetor em ordem normal: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    
    printf("\n\nVetor na ordem inversa: \n ");
    for(i = 4; i >= 0 ; i--){
        printf("%d ", vetor[i]);
    }



    return 0;
}