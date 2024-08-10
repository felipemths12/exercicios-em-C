#include <stdio.h>
#include <stdlib.h>

int main(){
     float salario, percentual, aumento, novo_salario;

     printf("Digite aqui o valor do seu salario: ");
     scanf("%f", &salario);
     fflush(stdin);

     printf("Digite aqui o valor do seu salario: ");
     scanf("%f", &percentual);
     fflush(stdin);

     aumento = salario * percentual/100;

     novo_salario = salario + aumento;

     printf("Esse é o novo salario: %.2f", novo_salario);
}