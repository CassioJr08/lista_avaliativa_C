#include <stdio.h>

int main(){
    int cadastrando_senha;
    int validando_senha;

    scanf("%4d", &cadastrando_senha);
    printf("senha cadastrada: %d\n", cadastrando_senha);

    while (getchar() != '\n');
    
    while(1){

        scanf("%d", &validando_senha);
        if(validando_senha == cadastrando_senha){
            printf("senha valida!\n");
            break;
        }else{
            printf("senha invalida!\n");
        }
    }

}