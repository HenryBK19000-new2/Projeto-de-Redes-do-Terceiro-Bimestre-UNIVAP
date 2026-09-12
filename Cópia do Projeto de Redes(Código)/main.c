#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, protocolo;
	int opcao;
	
	printf("Qual protocolo utilizado?\n1. TCP\n2. UDP\n");
	scanf("%i", &protocolo);
	
	if (protocolo == 1 || protocolo == 2){
		printf("Enviando 10 pacotes...\n");
		for (i=1; i<=10; i++){
			printf("O pacote %i chegou?\n1. Sim\n2. Nao\n", i);
			scanf("%i", &opcao);
			switch(opcao){
				case 1:
					puts("Pacote enviado com sucesso!");
					break;
				case 2:
					if (protocolo == 1){
						puts("Pacote foi perdido; reenviando o pacote...");
						i--;
					}
					else puts("Pacote foi perdido.");
					break;
				default:
					puts("Opcao invalida!");
					i--;
					break;
			}
			printf("\n------------------\n");
		}
	}
	else puts("Protocolo invalido!");
	
	return 0;
}
