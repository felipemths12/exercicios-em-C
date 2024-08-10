#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3;
    float pn1, pn2, pn3;
    float numerador;
    float denominador;
    float mpf;

    printf("Insira aqui a primeira nota: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Agora, insira o peso da primeira nota: ");
    scanf("%f", &pn1);

    printf("Insira aqui a segunda nota: ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("Agora, insira o peso da segunda nota: ");
    scanf("%f", &pn2);

    printf("Insira aqui a terceira nota: ");
    scanf("%f", &n3);
    fflush(stdin);
    printf("Agora, insira o peso da terceira nota: ");
    scanf("%f", &pn3);

    numerador = (n1*pn1) + (n2*pn2) + (n3*pn3);
    denominador = pn1 + pn2 + pn3;

    mpf = numerador/denominador;

    printf("Essa seria sua media ponderada final: %.1f", mpf);

    if(mpf >= 8.0 && mpf <= 10){
        printf("\nSeu desempenho foi nota A! Parabens!\n");
    }

    if(mpf >= 7.0 && mpf <= 7.9){
        printf("\nSeu desempenho foi nota B! Parabens.\n");
    }

    if(mpf >= 6.0 && mpf <= 6.9){
        printf("\nSeu desempenho foi nota C.\n");
    }

    if(mpf >= 5.0 && mpf <= 5.9){
        printf("\nSeu desempenho foi nota D. Nao se desanime, vamos busca da melhora!\n");
    }

    if(mpf >= 0 && mpf <= 4.9){
        printf("\nSeu desempenho foi nota E. Infelizmente, nao foi o suficiente.\n");
    }

    system("pause");
}