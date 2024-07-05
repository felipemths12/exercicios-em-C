#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int operacao;
	float n1;
	float n2;
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	
	
	printf("Bem vindo a sua calculadora!\n");
	printf("1- Soma, 2- Subtracao, 3- Multiplicacao, 4- Divisao.\n");
	printf("Primeiro, selecione uma operacao que deseja realizar:\n");
	scanf("%d", &operacao);
	
	switch(operacao){
		case 1:
			printf("Voce selecionou soma!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			soma = n1+n2;
			printf("Resultado: %.2f.\n", soma);
			break;
			
		case 2:
			printf("Voce selecionou subtracao!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			subtracao = n1-n2;
			printf("Resultado: %.2f.\n", subtracao);
			break;
			
		case 3:
			printf("Voce selecionou multiplicacao!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			multiplicacao = n1*n2;
			printf("Resultado: %.2f.\n", multiplicacao);
			break;
			
		case 4:
			printf("Voce selecionou divisao!\n");
			printf("Digite o primeiro valor: ");
			scanf("%f", &n1);
			printf("Digite o segundo valor: ");
			scanf("%f", &n2);
			divisao = n1/n2;
			printf("Resultado: %.2f.\n", divisao);
			break;
	}
	
	printf("Developed by: Felipe Matheus. :)\n");
	printf("GitHub: felipemths12\n");
	
	system ("pause");
}
