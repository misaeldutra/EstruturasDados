#include <stdio.h>
#include <stdlib.h>
//Vetores: Aglomerado de variaveis simples;
// - indice unico controla as posições;
//  <tipo> <nome>[<tamanho>]; deixar claro o tam;
// primeira posiçao do vetor é no indice [0];
// nao consegue acessar todo o vetor de uma vez;
    //<nome>[<indice>];


int main(){
    int v[5];
    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    //calculando a media;
    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("Resultado: %.2f\n",m);

    return 0;
}