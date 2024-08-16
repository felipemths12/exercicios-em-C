#include <stdio.h>
#include <stdlib.h>

float kwcusto(float num1){//num1 salario minimo. valor em reais de cada kwh

    return num1 * 0.001;

}

float valorapagar(float n1, float n2){//n1 kwh consumido, n2 kwh custo //valor a ser pago pela casa
    
    return n1 * n2;

}

float desc(float v1){//v1 valor a pagar

    return v1 * 0.15;

}

int main(){

    float kWhcons, kWhcus, sal, vlr_ap, val_Desc;

    printf("Insira o valor do salario: ");
    scanf("%f", &sal);
    fflush(stdin);

    printf("Insira a quantidade de kilowatts consumida pela casa: ");
    scanf("%f", &kWhcons);
    fflush(stdin);

    kWhcus = kwcusto(sal);
    vlr_ap = valorapagar(kWhcons, kWhcus);
    val_Desc = vlr_ap - desc(vlr_ap);


    printf("Valor do KW: R$%.2f.\n", kWhcus);
    printf("Valor a ser pago pela casa: R$%.2f.\n", vlr_ap);
    printf("Valor a ser pago com desconto: R$%.2f.\n", val_Desc);

    system("pause");
}