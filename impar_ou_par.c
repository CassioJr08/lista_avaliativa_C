#include <stdio.h>

int main(){
    int numero;
    int soma = 0;
    scanf("%d", &numero);

    int variavel_simbolica = numero;

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
    }else{
        printf("%d eh impar\n", numero);
    }

    while (numero > 0) {
        // Obtém o último dígito do número
        int digito = numero % 10;
        
        // Adiciona o dígito à soma
        soma += digito;
        
        // Remove o último dígito do número
        numero /= 10;
    }

    printf("A soma dos algarismos de %d eh %d\n", variavel_simbolica, soma);


    return 0;
}