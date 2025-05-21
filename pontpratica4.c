#include <stdio.h>
#include <stdlib.h>

int main(){
    char palavra[101];
    char *ptr = palavra;

    char s; //letra

    printf("Informe uma string: ");

        while(1){
            scanf("%c", &s);

            if(s == '\n'){ //se caso ele clicar enter;
                break;
            }

            *ptr = s;
            ptr++;

        }
        *ptr = '\0';

        ptr = palavra;

        int contarstring = 0;

        while(*ptr != '\0'){
            contarstring++;
            ptr++;
        }

        printf("\nO numero de caracteres da string informada = %d caracteres", contarstring);


    return 0;
}