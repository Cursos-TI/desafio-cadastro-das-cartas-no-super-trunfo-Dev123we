/* Esta sofiware se trata de uma simulação das movimentaçaões
   de peças de xadrez, iniciando pela torre, bispo e a rainha.
   Estarei utilizando estruturas de decisão encadeada e estruturas
   de repetição como for, do-while e while para definir o direção 
   e a quantidade de casas puladas. */
   
#include <stdio.h>

int main(){
	// Declaração de variáveis 
	int i, j, l, pecas, direcao, opcao;
	
	// Menu interativo com o usuário.
	printf("*** Jogo movimentações de peças do xadrez ***\n");
	printf("1. Movimentar torre\n");
	printf("2. Movimentar bispo\n");
	printf("3. Movimentar rainha\n");
	printf("4. Movimentar cavalo\n");
	
	// Primeira entrada para definir qual a peça a ser movimentada.
	printf("Escolha qual peça deseja movimentar:\n");
	scanf("%d", &opcao);
	
	/* Estrutura de decisão switch, para verificar as inicias de cada
	   peça inserida pelo usuário. */
	switch (opcao){
		case 1:
			// Entrada para inserir a direção e as casas que a torre irá.
			printf("Movimentos disponíveis para a torre\n");
		    printf("1. Direita\n");
		    printf("2. Esquerda\n");
		    printf("3. Cima\n");
		    printf("4. Baixo\n");
	        printf("Qual e a direção que a torre deve ir?\n");
	        scanf("%d", &direcao);
	
	        printf("Digite quantas casas você quer movimentar a torre:\n");
	        scanf("%d", &pecas);
	    
	        /* Aqui decidi utilizar uma estrura encadeada e aninhada a
	        estrutura de repetição for */
     	    if (direcao == 1){		
	            printf("Direcionado a torre a direita\n");
		        for (i = 1; i <= pecas; i++){
			        printf("Direita\n");
		        }
	        }    
	        else if (direcao == 2){
		        printf("Direcionado a torre a esquerda\n");
		        for (i = 1; i <= pecas; i++){
			        printf("Esquerda\n");
		        }
	        }
	        else if (direcao == 3){
		        printf("Direcionado a torre para cima\n");
		        for (i = 1; i <= pecas; i++){
			        printf("Cima\n");
		        }
	        }
	        else if (direcao == 4){
	        	printf("Direcionado a torre para baixo\n");
			}
	        else{
		        printf("Opção inválida\n");
	        }
        break;
        case 2:
        	// Entrada para inserir a direção e as casas que o Bispo irá.
        	printf("Movimentos disponíveis para o Bispo\n");
		    printf("1. Diagonal direita\n");
	     	printf("2. Diagonal esquerda\n");
	     	printf("3. Diagonal atras a direita\n");
	     	printf("4. Diagonal atras a esquerda\n");
	     	
	        printf("Qual é a direção que o bispo deve ir?\n");
	        scanf("%d", &direcao);
	        
	        printf("Digite quantas casas você quer movimentar o bispo:\n");
	        scanf("%d", &pecas);
	        
	        /* Aqui decidi utilizar uma estrura encadeada e aninhada com a
	        estrutura de repetição do-while */
	        
	        if (direcao == 1){
	        	printf("Direcionando o bispo para a diagonal a frente a direita\n");
	        	do{
	        		printf("Cima, direita\n");
	        		
	        		j++;
				}while (j <= pecas);
			}
			else if (direcao == 2){
				printf("Direcionando o bispo para a diagonal a frente a esquerda\n");
				do{
					printf("Cima, esquerda\n");
					
					j++;
				}while (j <= pecas);
			}
			else if (direcao == 3){
				printf("Direcionando o bispo para a diagonal atrás a direita\n");
				do{
					printf("Baixo, direita\n");
					
					j++;
				}while (j <= pecas);
			}
			else if (direcao == 4){
				printf("Direcionando o bispo para a diagonal atrás a esquerda\n");
				do{
					printf("Baixo, esquerda\n");
					
					j++;
				}while (j <= pecas);
			}
			else{
				printf("Opcao inválida\n");
			}
		break;
		case 3:
			// Entrada para inserir a direção e as casas que a Rainha irá.
			printf("Movimentos disponiveis para a rainha\n");
			printf("1. Diagonal direita\n");
	     	printf("2. Diagonal esquerda\n");
	     	printf("3. Diagonal atrás a direita\n");
	     	printf("4. Diagonal atrás a esquerda\n");
	     	printf("5. Direita\n");
	     	printf("6. Esquerda\n");
	     	printf("7. Cima\n");
	     	printf("8. Baixo\n");
	     	
	        printf("Qual é a direção que a Rainha deve ir?\n");
	        scanf("%d", &direcao);
	        
	        printf("Digite quantas casas você quer movimentar a Rainha:\n");
	        scanf("%d", &pecas);
	        
	        /* Aqui decidi utilizar uma estrura encadeada e aninhada a
	        estrutura de repetição while */
	        
	        l = 1;
	        if (direcao == 1){
	        	printf("Direcionando a rainha para a diagonal a frente a direita\n");
	        	while (l <= pecas){
	        	    printf("Cima, direita\n");
	        				
	        		l++;
				}
			}
				
			else if (direcao == 2){
				printf("Direcionando a rainha para a diagonal a frente a esquerda\n");
				while (l <= pecas){
					printf("Cima, esquerda\n");
							
					l++;
				}
			}

			else if (direcao == 3){
				printf("Direcionando a rainha para a diagonal atrás a direita\n");
				while (l <= pecas){
					printf("Baixo, direita\n");
							
					l++;
				}
			}

			else if (direcao == 4){
				printf("Direcionando a rainha para a diagonal atrás a esquerda\n");
				while (l <= pecas){
					printf("Baixo, esquerda\n");
							
					l++;
				}
			}

			else if (direcao == 5){
				printf("Direcionado a rainha para direita\n");
				while (l <= pecas){
					printf("Direita\n");
							
					l++;
				}
			}

			else if (direcao == 6){
				printf("Direcionado a rainha para esquerda\n");
				while (l <= pecas){
					printf("Esquerda\n");
							
					l++;
				}		
			}
			
			else if (direcao == 7){
				printf("Direcionado a rainha para cima\n");
				while (l <= pecas){
					printf("Cima\n");
							
					l++;
				}		
			}
			
			else if (direcao == 8){
				printf("Direcionado a rainha para baixo\n");
				while (l <= pecas){
					printf("Baixo\n");
							
					l++;
				}		
			}
			
			else {
				printf("Opção inválida\n");
			}
		break;
		case 4:
			/* São os 4 principois movimentos do cavalo que
			   permitem fazer o L acima na direita e esquerda,
			   e baixo na direita e esquerda. 
			*/
			printf("Movimentações disponíveis do cavalo\n");
			printf("1. Cima direita\n");
			printf("2. Cima esquerda\n");
			printf("3. Baixo direita\n");
			printf("4. Baixo esquerda\n");
			
			printf("Digite em que direção você quer movimentar o cavalo?");
			scanf("%d", &direcao);
			
			if (direcao == 1){
				printf("Direcionando o cavalo cima a direita\n");
				
				int Movimento_completo = 1; // Flag para para controlar o movimento do cavalo
				
			    /* Aqui temos uma estrutura de repetição aninhada que 
				será utilizada nas outras condicionais do if-else */
			    while(Movimento_completo--){
				    for(int o = 1; o <= 2; o++){
					printf("Cima\n");
				    }
				   printf("Direita\n");
			    }
			}
			
			else if (direcao == 2){
				printf("Direcionando o cavalo cima a esquerda\n");
				int Movimento_completo = 1;
			
			    while(Movimento_completo--){
				    for(int o = 1; o <= 2; o++){
					printf("Cima\n");
				    }
				   printf("Esquerda\n");
			    }
			}
			
			else if (direcao == 3){
				printf("Direcionando o cavalo baixo a direita\n");
				int Movimento_completo = 1;
			
			    while(Movimento_completo--){
				    for(int o = 1; o <= 2; o++){
					printf("Baixo\n");
				    }
				   printf("Direita\n");
			    }
			}
			
			else if (direcao == 4){
				printf("Direcionando o cavalo baixo a esquerda\n");
				int Movimento_completo = 1;
			
			    while(Movimento_completo--){
				    for(int o = 1; o <= 2; o++){
					printf("Baixo\n");
				    }
				   printf("Esquerda\n");
			    }
			}
			else{
				printf("Opcão inválida\n");
			}
		break;
	}
	
	return 0;
}