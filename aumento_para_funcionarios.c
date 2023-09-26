#include <stdio.h>

int main(){
    char experiencia;
    float salario_atual;

    float salario_com_aumento;
    
    scanf("%c", &experiencia);
    scanf("%f", &salario_atual);
    
    if(experiencia == 'a'){
        salario_com_aumento = salario_atual + (salario_atual * 0.05);
    }else if(experiencia == 'b'){
        salario_com_aumento = salario_atual + (salario_atual * 0.07);
    }else if(experiencia == 'c'){
        salario_com_aumento = salario_atual + (salario_atual * 0.08);
    }

    printf("R$ %.2f", salario_com_aumento);

    return 0;

    
}