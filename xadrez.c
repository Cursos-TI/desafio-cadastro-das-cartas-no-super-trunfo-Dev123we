/* Este software seria um pequeno projeto do jogo super triunfo de países.
 Bem, basicamente estarei utilizando conceitos simples de acordo com os requisitos
 funcionais e não funcionais da documentação, introduzindo uma interface que seja 
 capaz de interagir com os usuários através de funções como printf e scanf. e para 
 manipulação de variáveis tipos primitivos como int, char e float e até alguns 
 modificadores de tipos de dados como unsigned long int. Também foi necessário 
 aplicar conversões explícitas para evitar erros de precisão em algumas operações. */
 
#include <stdio.h>

int main(){
	/*Iniciaremos declarando as variáveis que seram necessárias para 
	poder armazenar as informações das cidades. */
	
	char estado, estado_2;
	char codigo[4], codigo_2[4];
	char nome_cidade[15], nome_cidade2[15];
	unsigned long int populacao, populacao_2;
	int pontos_turis, pontos_turis_2;
	float pib, pib_2, densi_populacional, densi_populacional_2, per_cap, per_cap_2; 
	float area, area_2;

	// Logo abaixo começamos a interagir com o usuário através das funções printf e scanf
	
	printf("**** Seja bem-vindo ao jogo super triunfo ****\n");
	printf("O jogo basicamente pede para que voce informe dados de duas cidades as quais serao suas cartas.\n");
	printf("Quando for responder aos questionarios insira um dado por vez exemplo: dado1 --> enter --> dado2 --> enter\n");
	printf("e assim sucessivamente.\n");
	
	// Entrada para variáveis estado e estado_2
	printf("Primeiro, insira as iniciais dos estados que deseja:\n");
	scanf("%c %c", &estado, &estado_2);
	
	printf("\n");
	
	// Entrada para variáveis codigo e codigo_2
	printf("Agora de forma individual, insira as inicias dos estados mais um algarismo de 01 a 04 exemplo: B02 e P01:\n");
	scanf("%s %s", codigo, codigo_2);
	
	printf("\n");
	
	// Entrada para variáveis nome_cidade e nome_cidade_2
	printf("Okay, digite os nomes das cidades:\n");
	scanf("%s %s", nome_cidade, nome_cidade2);
	
	printf("\n");
	
	// Entrada para variáveis papulacao e populacao_2
	printf("Insira a quantidade aproximada das populacoes de cada cidade:\n");
	scanf("%lu %lu", &populacao, &populacao_2);
	
	printf("\n");
	
	// Entrada para variáveis area e area_2
	printf("Estamos quase terminando, agora digite as areas de cada cidade em quilometros quadrados:\n");
	scanf("%f %f", &area, &area_2);
	
	printf("\n");
	
	// Entrada para variáveis pib e pib_2
	printf("Certo, insira os pibs de cada cidade:\n");
	scanf("%f %f", &pib, &pib_2);
	
	printf("\n");
	
	// Entrada para variáveis pontos_turis e pontos_turis_2
	printf("Para finalizarmos, quantos pontos turisticos existem em cada cidade?\n");
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
	   retornam 1 ou 0. */
	
	int resultado = populacao > populacao_2;
	int resultado_2 = area > area_2;
	int resultado_3 = pib > pib_2;
	int resultado_4 = pontos_turis > pontos_turis_2;
	int resultado_5 = per_cap > per_cap_2;
	int resultado_6 = (1 /densi_populacional) > (1 /densi_populacional_2);
	int resultado_7 = super_poder_carta1 > super_poder_carta2;
	
	printf("\n");
	
	// impressão dos dados da primeira carta
	
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Codigo: %s\n", codigo);
	printf("Nome da cidade: %s\n", nome_cidade);
	printf("Populacao: %lu\n", populacao);
	printf("A area em quilometros quadrados: %.2f \n", area);
	printf("PIB: %.2f\n", pib);
	printf("Quantidade de pontos turisticos: %d \n", pontos_turis);
	printf("Densidade populacional: %.2f hab/km \n", densi_populacional);
	printf("PIB per capita: %.2f reais \n", per_cap);
	printf("O super poder: %.2f\n", super_poder_carta1);

    printf("\n");
    
	// impressão dos dados da segunda carta
	
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado_2);
	printf("Codigo: %s\n", codigo_2);
	printf("Nome da cidade: %s\n", nome_cidade2);
	printf("Populacao: %lu\n", populacao_2);
	printf("A area em quilometros quadrados: %.2f\n", area_2);
	printf("PIB: %.2f\n", pib_2);
	printf("Quantidade de pontos turisticos: %d\n", pontos_turis_2);
	printf("Densidade populacional: %.2f hab/km \n", densi_populacional_2);
	printf("PIB per capita: %.2f reais \n", per_cap_2);
	printf("O super poder: %.2f \n", super_poder_carta2);
	
	printf("\n");
	
	// Comparações de cartas
	printf("As comparacoes que tiverem como resultado o valor 1 serao da carta 1\n");
	printf("e aquelas que tiverem como resultado o valor 0 serao da carta 2\n");
	printf("Comparacao de cartas:\n");
	printf("Populacao: %d\n", resultado);
	printf("area: %d\n", resultado_2);
	printf("PIB: %d\n", resultado_3);
	printf("pontos turisticos: %d\n", resultado_4);
	printf("PIB per capita %d\n", resultado_5);
	printf("densidade populacional: %d\n", resultado_6);
	printf("Super poder: %d\n", resultado_7);
	
	return 0;
}