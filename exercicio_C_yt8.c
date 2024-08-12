#include <stdio.h>

int main(){

    int ant1, ant2, atual, i;
    ant1 = 1;
    ant2 = 0;

    printf("Os 8 primeiros numeros da sequencia de Fibonacci sao: \n");
    printf("%d ", ant2);
    printf("%d ", ant1);

    for(i = 3; i <=8; i++){
        atual = ant1 + ant2;
        ant2 = ant1;
        ant1 = atual;
        printf("%d ", atual);
    }
}