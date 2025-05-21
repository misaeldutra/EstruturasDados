#include <stdio.h>
#include <stdlib.h>

void maiormenor(int *v1,int *v2){
   if(*v1 < *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
   }

    
}



int main(){
    int v1,v2;

    printf("Informe o primeiro valor: ");
    scanf("%d", &v1);
    printf("\nInforme o segundo valor: ");
    scanf("%d", &v2);

    maiormenor(&v1,&v2);

    printf("\nO valor 1 (maior): %d\n", v1);

    printf("O valor 2 (menor): %d\n", v2);



    return 0;
}