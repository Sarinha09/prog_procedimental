#include <stdio.h>

int main(){
    int salario_atual, tempo_servico, salario_novo;

    printf("Digite seu salario atual: ");
    scanf("%d", &salario_atual);

    printf("Digite tempo de servico: ");
    scanf("%d", &tempo_servico);

    if(salario_atual <= 500){
        salario_novo = (salario_atual*0.25) + salario_atual;
        printf("salario reajustado para: %d\n", salario_novo);
    }
    
    else if(salario_atual > 500 && salario_atual <= 1000 ){
        salario_novo = (salario_atual*0.20) + salario_atual;
        printf("salario reajustado para: %d\n", salario_novo);
    }

    else if(salario_atual > 1000 && salario_atual <= 1500 ){
        salario_novo = (salario_atual*0.15) + salario_atual;
        printf("salario reajustado para: %d\n", salario_novo);
    }


    else if(salario_atual > 1500 && salario_atual <= 2000 ){
        salario_novo = (salario_atual*0.10) + salario_atual;
        printf("salario reajustado para: %d\n", salario_novo);
    }

    else {
        printf("Sem reajuste");
    }


    if (tempo_servico <= 1){
        printf("Sem bonus\n");
    }
    else if (tempo_servico > 1 && tempo_servico <= 3 ){
        printf("Bonus de R$100 = R$%d\n", salario_novo + 100);
    }
    else if( tempo_servico > 3 && tempo_servico <= 6){
        printf("Bonus de R$200 = R$%d\n", salario_novo + 200);
    }
    else if( tempo_servico > 4 && tempo_servico <= 10){
        printf("Bonus de R$300 = R$%d\n", salario_novo + 300);
    }
    else{
        printf("Sem bonus");
    }
    
    return 0;

}