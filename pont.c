#include <stdio.h>
#include <stdlib.h>
//Ponteiros: Tipo de variavel que aponta para outra, ele guarda o endereco de memoria de uma variavel.


int main(){
    int count = 10;
    int *ptr;

    ptr = &count; //pega o endereco de count;

    printf("O valor de count inicial = %d\n", *ptr);

    *ptr = 22;

    printf("\nO valor de count agora = %d\n", *ptr);

    printf("\nO endereco para onde o ponteiro aponta = %p\n", ptr);

    printf("\nO endereco do ponteiro = %p\n", &ptr);




    return 0;
}