#include <stdio.h>

int main(){
    int valor1;
    int valor2;

    int armazenador;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    if(valor1 == valor2){
        printf("Os dois valores sao iguais\n");
    }else if(valor1 > valor2){
        printf("%d eh maior que %d\n",valor1, valor2);
        armazenador = valor1;
    }else if(valor1 < valor2){
        printf("%d eh maior que %d\n",valor2, valor1);
         armazenador = valor2;
    }

    if(armazenador == valor1){
        if(valor1 % valor2 == 0){
            printf("%d eh multiplo de %d\n", valor1, valor2);
        }else{
            printf("%d nao eh multiplo de %d\n", valor1, valor2);
        }
    }

    if(armazenador == valor2){
        if(valor1 % valor2 == 0){
            printf("%d eh multiplo de %d\n", valor2, valor1);
        }else{
            printf("%d nao eh multiplo de %d\n", valor2, valor1);
        }
    }
    
    return 0;
}