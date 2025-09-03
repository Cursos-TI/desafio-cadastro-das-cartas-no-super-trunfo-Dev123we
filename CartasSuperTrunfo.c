/* Este software seria um pequeno projeto do jogo super trunfo de países.
 Bem, basicamente estarei utilizando conceitos simples de acordo com os requisitos
 funcionais e não funcionais da documentação, introduzindo uma interface que seja 
 capaz de interagir com os usuários através de funções como printf e scanf. e para 
 manipulação de variáveis, tipos primitivos como int, char e float e até alguns 
 modificadores de tipos de dados como unsigned long int. Também foi necessário 
 aplicar conversões explícitas para evitar erros de precisão em algumas operações.
 Para controlar e verificar dados inseridos pelos usuários, utilizei estrtuturas
 de decisão encadeada, aninhada, operadores ternários e switch. */
 
#include <stdio.h>

int main(){
	/* Iniciei declarando as variáveis que serão necessárias para 
	poder armazenar as informações das cidades. */
	
	char estado, estado_2;
	char codigo[4], codigo_2[4];
	char nome_cidade[15], nome_cidade2[15];
	unsigned long int populacao, populacao_2;
	int pontos_turis, pontos_turis_2;
	float pib, pib_2, densi_populacional, densi_populacional_2, per_cap, per_cap_2; 
	float area, area_2;

	// Logo abaixo começamos a interagir com o usuário através das funções printf e scanf
	
	printf("**** Seja bem-vindo ao jogo super trunfo ****\n");
	printf("O jogo basicamente pede para que você informe dados de duas cidades as quais serão suas cartas\n");
	printf("e logo em seguida irá comparar o valor de dois atributos escolhidos pelo usuário, então quem\n");
	printf("tiver a maior somatória vence.\n");
	printf("Quando for responder aos questionários insira um dado por vez, exemplo: dado1 --> enter --> dado2 --> enter\n");
	printf("e assim sucessivamente.\n");
	printf("\n");
	
	// Entrada para variáveis estado e estado_2
	printf("Primeiro, insira as iniciais dos estados que deseja:\n");
	scanf("%c %c", &estado, &estado_2);
	
	printf("\n");
	
	// Entrada para variáveis codigo e codigo_2
	printf("Agora de forma individual, insira as inicias dos estados mais um algarismo de 01 a 04 exemplo: B02 e P01:\n");
	scanf("%s %s", codigo, codigo_2);
	
	printf("\n");
	
	// Entrada para variáveis nome_cidade e nome_cidade2
	printf("Okay, digite os nomes das cidades:\n");
	scanf("%s %s", nome_cidade, nome_cidade2);
	
	printf("\n");
	
	// Entrada para variáveis papulacao e populacao_2
	printf("Insira a quantidade aproximada das populações de cada cidade:\n");
	scanf("%lu %lu", &populacao, &populacao_2);
	
	printf("\n");
	
	// Entrada para variáveis area e area_2
	printf("Estamos quase terminando, agora digite as áreas de cada cidade em km²:\n");
	scanf("%f %f", &area, &area_2);
	
	printf("\n");
	
	// Entrada para variáveis pib e pib_2
	printf("Certo, insira os pibs de cada cidade:\n");
	scanf("%f %f", &pib, &pib_2);
	
	printf("\n");
	
	// Entrada para variáveis pontos_turis e pontos_turis_2
	printf("Para finalizarmos, quantos pontos turísticos existem em cada cidade?\n");
	scanf("%d %d", &pontos_turis, &pontos_turis_2);
	
	/* Nessas variáveis foi necessário utilizar o operador
	   aritmético "/" para fazer a divisão e encontrar os 
	   valores das densidades populacionais e PIBs per 
	   capita das cidades. E também para que não houvesse
	   erros na divisão entre variáveis de tipos diferentes
	   foi aplicado um casting em todas as operações. */
	   
	densi_populacional = (float) populacao / area;
	densi_populacional_2 = (float) populacao_2 / area_2;
	
	per_cap = (float) pib / populacao;
	per_cap_2 = (float) pib_2 / populacao_2;
	
	/* Essas variáveis abaixos são do super poder 
	   onde temos a soma de todas as outras variáveis
	   exceto estado, estado_2, codigo, codigo_2, 
	   nome_cidade e nome_cidade2. */
	
	float super_poder_carta1 = (float) populacao + area + pib + pontos_turis + per_cap + densi_populacional;
	float super_poder_carta2 = (float) populacao_2 + area_2 + pib_2 + pontos_turis_2 + per_cap_2 + densi_populacional_2;
	
	/* As variáveis abaixo estão recebendo os
	   valores das operações relacionais, onde
	   retornam 1 para verdadeiro ou 0 para falso. */
	
	int resultado = populacao > populacao_2;
	int resultado_2 = area > area_2;
	int resultado_3 = pib > pib_2;
	int resultado_4 = pontos_turis > pontos_turis_2;
	int resultado_5 = per_cap > per_cap_2;
	int resultado_6 = (1 /densi_populacional) > (1 /densi_populacional_2);
	int resultado_7 = super_poder_carta1 > super_poder_carta2;
	
	printf("\n");
	
	// impressão dos dados da primeira carta
	printf("Estas são as impressões das cartas 1 e 2.\n");
	printf("\n");
	
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Código: %s\n", codigo);
	printf("Nome da cidade: %s\n", nome_cidade);
	printf("População: %lu\n", populacao);
	printf("A area em km²: %.2f \n", area);
	printf("PIB: US$ %.2f\n", pib);
	printf("Quantidade de pontos turísticos: %d \n", pontos_turis);
	printf("Densidade populacional: %.2f hab/km² \n", densi_populacional);
	printf("PIB per capita: US$ %.2f reais \n", per_cap);
	printf("O super poder: %.2f\n", super_poder_carta1);

    printf("\n");
    
	// impressão dos dados da segunda carta
	
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado_2);
	printf("Código: %s\n", codigo_2);
	printf("Nome da cidade: %s\n", nome_cidade2);
	printf("População: %lu\n", populacao_2);
	printf("A área: %.2f km²\n", area_2);
	printf("PIB: US$ %.2f\n", pib_2);
	printf("Quantidade de pontos turísticos: %d\n", pontos_turis_2);
	printf("Densidade populacional: %.2f hab/km² \n", densi_populacional_2);
	printf("PIB per capita: US$ %.2f\n", per_cap_2);
	printf("O super poder: %.2f \n", super_poder_carta2);
	
	printf("\n");
	
	// Comparações de cartas
	printf("As comparações que tiverem como resultado o valor 1 vence a carta 1\n");
	printf("e aquelas que tiverem como resultado o valor 0 vence a carta 2\n");
	printf("Comparação de cartas:\n");
	printf("População: %d\n", resultado);
	printf("Área: %d\n", resultado_2);
	printf("PIB: %d\n", resultado_3);
	printf("Números de Pontos turisticos: %d\n", resultado_4);
	printf("PIB per capita: %d\n", resultado_5);
	printf("densidade populacional: %d\n", resultado_6);
	printf("Super poder: %d\n", resultado_7);
	printf("\n");
	
	/* Abaixo temos a declaração das variáveis Primeiro_Atributo
	   e Segundo_Atributo e o menu interativo para comparar os 
	   atributos das cartas. */
	int Primeiro_Atributo, Segundo_Atributo_2;
	
	printf("Compare os atributos das cartas para saber qual e a vencedora\n");
	printf("1. População\n");
	printf("2. Área\n");
	printf("3. PIB\n");
	printf("4. Pontos turísticos\n");
	printf("5. PIB per capita\n");
	printf("6. Densidade populacional\n");
	printf("\n");
	
	printf("Digite a primeira opção do atributo selecionado:\n");
	scanf("%d", &Primeiro_Atributo);
	printf("Digite a segunda opção do atributo selecionado:\n");
	scanf("%d", &Segundo_Atributo_2);
	
	printf("\n");
    
    /* Aqui temos a declaração das variáveis Resultado
       e Resultado2 e a estrutura do switch para controlar
	   e verificar as opções escolhidas.
       
       Cada case representa uma opção de atributo que 
	   possa ser escolhida pelo usuário, e o onde diz 
	   o nome e o valor dos atributos de cada carta. 
	   E também uma estrutura de decisão encadeada 
	   que compara os valores dos atributos.
       
       Estarei utilizando operadores ternários para comparar os atributos.
	   Caso o valor da carta 1 seja maior que o da carta 2, as variáveis 
	   Resultado e Resultado_2 recebem o valor 1, se o valor da carta 1 
	   for menor que a da carta 2, recebem 0.
    */
    
	int Resultado, Resultado2;
	
	switch (Primeiro_Atributo){
		case 1:
			printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi população\n");
			printf("O valor do atributo população da carta 1: %lu\n", populacao);
			printf("O valor do atributo população da carta 2: %lu\n", populacao_2);
			
            printf("\n");
			
			Resultado = populacao > populacao_2 ? 1 : 0;
			
		break;
		case 2:
			printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi área\n");
			printf("O valor do atributo área da carta 1: %.2f\n", area);
			printf("O valor do atributo área da carta 2: %.2f\n", area_2);
			
		    printf("\n");
			
			Resultado = area > area_2 ? 1 : 0;
			
		break;
		case 3:
			printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi PIB\n");
			printf("O valor do atributo PIB da carta 1: %.2f\n", pib);
			printf("O valor do atributo PIB da carta 2: %.2f\n", pib_2);
			
            printf("\n");
			
			Resultado = pib > pib_2 ? 1 : 0;
			
		break;
		case 4:
		    printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi pontos turisticos\n");
			printf("O valor do atributo pontos turísticos da carta 1: %d\n", pontos_turis);
			printf("O valor do atributo pontos turísticos da carta 2: %d\n", pontos_turis_2);
			
			printf("\n");
			
			Resultado = pontos_turis > pontos_turis_2 ? 1 : 0;
			
		break;
		case 5:
			printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi PIB per capita\n");
			printf("O valor do atributo PIB per capita da carta 1: %.2f\n", per_cap);
			printf("O valor do atributo PIB per capita da carta 2: %.2f\n", per_cap_2);
			
			printf("\n");
			
			Resultado = per_cap > per_cap_2 ? 1 : 0;
			
		break;
		case 6:
			printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			printf("O atributo escolhido foi densidade populacional\n");
			printf("O valor do atributo densidade populacional da carta 1: %.2f\n", densi_populacional);
			printf("O valor do atributo densidade populacional da carta 2: %.2f\n", densi_populacional_2);
			
			printf("\n");
			
			Resultado = densi_populacional < densi_populacional_2 ? 1 : 0;
			
		break;
		default:
			printf("Opção inválida\n");
    }
    
    if (Primeiro_Atributo == Segundo_Atributo_2){
    	printf("Este atributo já foi selecionado\n");
	}
	else{
		switch (Segundo_Atributo_2){
		    case 1:
			    printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi população\n");
			    printf("O valor do atributo população da carta 1: %lu\n", populacao);
			    printf("O valor do atributo população da carta 2: %lu\n", populacao_2);
			    
			    printf("\n");
			
			    Resultado2 = populacao > populacao_2 ? 1 : 0;
			
		    break;
		    case 2:
		      	printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi área\n");
		     	printf("O valor do atributo área da carta 1: %.2f km²\n", area);
			    printf("O valor do atributo área da carta 2: %.2f km²\n", area_2);
			    
			    printf("\n");
			
			    Resultado2 = area > area_2 ? 1 : 0;
			
		    break;
		    case 3:
			    printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi PIB\n");
			    printf("O valor do atributo PIB da carta 1: %.2f\n", pib);
			    printf("O valor do atributo PIB da carta 2: %.2f\n", pib_2);
			    
			    printf("\n");
			
			    Resultado2 = pib > pib_2 ? 1 : 0;
			
		    break;
		    case 4:
		        printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi pontos turisticos\n");
			    printf("O valor do atributo pontos turísticos da carta 1: %d\n", pontos_turis);
			    printf("O valor do atributo pontos turísticos da carta 2: %d\n", pontos_turis_2);
			    
			    printf("\n");
			
			    Resultado2 = pontos_turis > pontos_turis_2 ? 1 : 0;
			
		    break;
		    case 5:
			    printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi PIB per capita\n");
			    printf("O valor do atributo PIB per capita da carta 1: %.2f\n", per_cap);
			    printf("O valor do atributo PIB per capita da carta 2: %.2f\n", per_cap_2);
			    
			    printf("\n");
			
			    Resultado2 = per_cap > per_cap_2 ? 1 : 0;
			
		    break;
		    case 6:
			    printf("A carta 1: %s e carta 2: %s\n", nome_cidade, nome_cidade2);
			    printf("O atributo escolhido foi densidade populacional\n");
			    printf("O valor do atributo densidade populacional da carta 1: %.2f\n", densi_populacional);
			    printf("O valor do atributo densidade populacional da carta 2: %.2f\n", densi_populacional_2);
			    
			    printf("\n");
			
			    Resultado2 = densi_populacional < densi_populacional_2 ? 1 : 0;
			
		    break;
		    default:
		    	printf("Opção inválida\n");
	    }
    }
      
	/* Aqui temos a estrutura de decisão encadeada
	   final, que irá verificar os valores recebidos 
	   das variáveis Resultado e Resultado2. 
	   Então se:
	   # Carta 1 recebe os valores 1 e 1 vence e a carta 2 perde.
	   # Carta 1 recebe os valores 1 e 0 empata com a carta 2.
	   # Carta 1 recebe os valores 0 e 0 perde e a carta 2 vence.
	*/  

	if (Resultado && Resultado2){
		printf("Carta 1 venceu e a Carta 2 perdeu\n");
	}
	else if (Resultado != Resultado2){
		printf("Houve um empate\n");
	}
	else{
		printf("Carta 1 perdeu e a carta 2 venceu\n");
	}
	return 0;
}
