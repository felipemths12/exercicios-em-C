#include <stdio.h>
#include <stdlib.h>

float salariobruto(float num1, float num2){ //num1 horas trabalhadas, num2 valor horas

   return num1 * num2;

}

float hrtrab (float n1, float n2){ //n1 hora trabalhada e n2 salario minimo

    return n1 = n2/2;

}

float imposto (float v1){//v1 salario bruto
    
   return v1 * 0.03;

}

float salareceber(float num3, float num4){//num3 salario bruto, num4 impostos
    
    return num3 - num4;

}


int main(){

    float sal, sal_b, valor_hr, hr, imp, sal_ar;

    printf("Insira aqui a quantidade de horas trabalhadas: ");
    scanf("%f", &hr);
    fflush(stdin);

    printf("Insira aqui o valor do salario minimo: ");
    scanf("%f", &sal);
    fflush(stdin);

    valor_hr = hrtrab(hr, sal);
    sal_b = salariobruto(hr, valor_hr);
    imp = imposto(sal_b);
    sal_ar = salareceber(sal_b, imp);

    printf("Esse seria o salario a receber: R$%.2f", sal_ar);

    system("pause");

}