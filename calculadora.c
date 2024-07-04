#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float AV1;
	float AV2;
	float AV3;
	float media;
	
	printf("Bem vindo a sua calculadora de notas!\n");
	printf("Digite sua nota da AV1: ");
	scanf("%f", &AV1);
	printf("Digite sua nota da AV2: ");
	scanf("%f", &AV2);
	
	if (AV2 >= 4.0 && AV2 <= 5.9){
		printf("Voce tem direito a realizar uma prova substitutiva, a AV3.\n");
		printf("Caso ja tenha feito, digite a nota da AV3: ");
		scanf("%f", &AV3);
		AV2 = AV3;
	}
	
	media = (AV1 + AV2)/2;
	printf("Essa eh sua media: %.1f.\n", media);
	if ( media >= 6.0){
		printf("Parabens! Voce foi aprovado na disciplina!\n");
	}
	
	if (media < 6.0){
		printf("Infelizmente voce foi reprovado. :(\n");
	}
	
	system ("pause");
}
