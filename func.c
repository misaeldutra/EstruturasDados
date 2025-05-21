#include <stdio.h>
#include <stdlib.h>

//Função sem retorno e parametro;
//Função sem retorno e com parametro;
//Função com retorno e sem parametro;
//Função com retorno e com parametro;

void desenha(){ //sem retorno e sem parametro;
    for(int i = 0;  i < 20; i++){
        printf("-");
    }
}

int abs(int x){ //com retorno e com parametro;
    if(x < 0){
        return -x;
    } else{
        return x;
    }
}



int main(){
    desenha();
    printf("\n usando funcoes\n");
    desenha();

    int num,b;
    printf("\nEntre com a base: ");
    scanf("%d", &num);

    b = abs(num);

    printf("Valor absoluto de num = %d", abs(num));



    return 0;
}