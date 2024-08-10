#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);

    printf("Insira o segundo valor: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O maior valor inserido eh o primeiro: %d", num1);
    } else {
        if (num1 < num2){
            printf("O maior valor inserido eh o segundo: %d", num2);
        } else {
            printf("Os valores sao iguais.");
        }
    }
        
    
}