#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Funções de manipulação de strings:

    //strlen = retorna o tamanho da string sem contar o '\0';

    //strcat = concatena str2 ao final de str(contanto q str1 + str2 tem q caaber em str1);

    //strcmp = compara dois strings retornando:
        //negativo se str1 < str2;
        //0 se str1 = str2;
        //positivo se str1 > str2;


int main(){
    char nome[40] = "Jose";
    char sobrenome[30] = "Maria";

    if(strcmp(nome,sobrenome) != 0){
        puts("Os strings sao diferentes!");
    } else{
        puts("os strings sao identicos!");
    }

    return 0;
}