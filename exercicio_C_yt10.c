#include <stdio.h>
#include <stdlib.h>

float lucrodistribuidor (float n1, float n2){ //n1 percentual, n2 preco de fabrica
    
    return n2 * n1/100;

}

float impostos (float num1, float num2){ //num1 percentual, num2 preco de fabrica
    
    return num2 * num1/100;

}

float precofinalveiculo (float v1, float v2, float v3){ //v1 preco de fabrica, v2 lucro distribuidor, v3 impostos
    
    return v1 + v2 + v3;
    
}

int main(){

    float pfab, percentual_dist, percentual_imp, lucro_dist, imp, vlr_f;

    printf("Insira o preco de fabrica: ");
    scanf("%f", &pfab);
    fflush(stdin);

    printf("Insira o percentual de lucro do distribuidor: ");
    scanf("%f", &percentual_dist);
    fflush(stdin);

    printf("Insira o percentual de impostos sobre o preco de fabrica: ");
    scanf("%f", &percentual_imp);
    fflush(stdin);

    lucro_dist = lucrodistribuidor(percentual_dist, pfab);
    imp =  impostos(percentual_imp, pfab);
    vlr_f = precofinalveiculo(pfab, lucro_dist, imp);

    printf("Esse seria o valor do lucro do distribuidor: R$%.2f.\n", lucro_dist);
    printf("Esse seria o valor dos impostos sobre preco de fabrica: R$%.2f.\n", imp);
    printf("Esse seria o preco final para o consumidor: R$%.2f.\n", vlr_f);

    printf("\n");

    system("pause");
}