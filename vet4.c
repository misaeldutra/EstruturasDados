#include <stdio.h>
#include <stdlib.h>

//Para ler mais de um nome com scanf:
    //scanf(" %[^\n]", cidade); 

//ou seja, le ate q seja digitado um enter;

int main(){
    char string[10] = "exemplo";

    printf("%s\n", string);
    printf("%c", string[0]);


    return 0;
}