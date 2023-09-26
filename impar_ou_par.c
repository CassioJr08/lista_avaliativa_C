#include <stdio.h>

int main(){
    int numero;
    int soma = 0;
    scanf("%d", &numero);

    int armazena_numero_atual = numero;

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
    }else{
        printf("%d eh impar\n", numero);
    }

    while (numero > 0) {
        int digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos algarismos de %d eh %d\n", armazena_numero_atual, soma);


    return 0;
}