/* Esta sofiware se trata de uma simulação das movimentaçaões
   das peças de xadrez: torre, bispo, rainha e o cavalo. Estarei 
   utilizando estruturas de decisão encadeada e estruturas de 
   repetições aninhadas e a recursividade para deixar o código
   mais legível e preciso com as movimentações das peças. */
   
#include <stdio.h>

/* Aqui iniciei declarando aa funções recursivas que vai fazer 
   a simulação de cada peça do xadrez. */

/* Função recursiva da peça torre, basicamente ela declara a entrada
   da variável que vai definir a quantidade de peças puladas a direita pela torre. */

void Mover_torre(int l){
	if (l > 0){
		printf("Direita\n");
		Mover_torre(l - 1);
	}
}

/* Função recursiva da peça Bispo, basicamente ela declara a entrada
   da variável que vai definir a quantidade de peças puladas na diagonal pelo Bispo. */

void Mover_bispo(int m){
	if (m > 0){
		printf("Cima\n");
		printf("Direita\n");
		printf("\n");
		Mover_bispo(m - 1);
	} 
}

/* Função recursiva da peça rainha, basicamente ela declara a entrada
   da variável que vai definir a quantidade de peças puladas na esquerda pela rainha. */

void Mover_rainha(int n){
	if (n > 0){
		printf("Esquerda\n");
		printf("\n");
		Mover_rainha(n - 1);
	}
}

int main(){
	// Declaração de variáveis 
	int i, j, opcao, pecas;
	
	// Menu interativo com o usuário.
	printf("*** Jogo movimentacoes de pecas do xadrez ***\n");
	printf("1. Movimentar torre\n");
	printf("2. Movimentar bispo\n");
	printf("3. Movimentar rainha\n");
	printf("4. Movimentar cavalo\n");
	
	// Primeira entrada para definir qual a peça a ser movimentada.
	printf("Escolha qual peca deseja movimentar:\n");
	scanf("%d", &opcao);
	
	/* Estrutura de decisão switch, para verificar as opções de cada
	   peça inserida pelo usuário. */
	switch (opcao){
		/* As cases a seguir irão retornar os funções recursivas de cada
		   peça. */
		case 1:
			pecas = 5;
			printf("Direcionando a torre para direita\n");
			Mover_torre(pecas);
        break;
        case 2:
        	pecas = 5;
        	printf("Direcionando o bispo para diagonal direita\n");
        	Mover_bispo(pecas);
        break;
		case 3:
			pecas = 8;
			printf("Direcionando a rainha para esquerda\n");
			Mover_rainha(pecas);
		break;
		/* Como foi pedido na documentação, para o cavalo utilizei
		    um loop com múltiplas variáveis para poder estar simulando
		    o movimento em L a cima a direita. E também utilizei o continue
			e o break para estar tendo um melhor controle do loop. */
		case 4:
			printf("Direcionando o cavalo cima a direita\n");
				
			for (i = 0, j = 0; i < 2 || j < 1;){
				if (i < 2){
					printf("Cima\n");
					i++;
					continue;
				}
					
				else if(j < 1){
					printf("Direita\n");
					j++;
				}
					
				if (i == 2 && j == 1){
					break;
				}
			}
		break;
		default:
			printf("Opcao invalida\n");
	}
		
	return 0;
}