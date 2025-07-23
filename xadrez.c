/* Este software seria um pequeno projeto do jogo super triunfo de países.
 Bem, basicamente estarei utilizando conceitos simples deacordo com os requisitos
 funcionais e não funcionais da documentação, introduzindo uma interface que seja 
 capaz de interagir com os usuários através de funções como printf e scanf. e para 
 manipulação de variáveis tipos primitivos como int, char e float. */
 
#include <stdio.h>

int main(){
	/*Iniciaremos declarando as variáveis que seram necessárias para 
	poder armazenar as informações das cidades. */
	
	char estado, estado_2;
	char codigo[3], codigo_2[3];
	char nome_cidade[20], nome_cidade2[20];
	int populacao, populacao_2;
	int pontos_turis, pontos_turis_2;
	float area, area_2;
	float pib, pib_2; 
	
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
	scanf("%d %d", &populacao, &populacao_2);
	
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
	
	printf("\n");
	
	// impressão dos dados da primeira carta
	
	printf("Carta 1:\n");
	printf("Estado: %c\n", estado);
	printf("Codigo: %s\n", codigo);
	printf("Nome da cidade: %s\n", nome_cidade);
	printf("Populacao: %d\n", populacao);
	printf("A area em quilometros quadrados: %.2f\n", area);
	printf("PIB: %.2f\n", pib);
	printf("Quantidade de pontos turisticos: %d\n", pontos_turis);

    printf("\n");
    
	// impressão dos dados da segunda carta
	
	printf("Carta 2:\n");
	printf("Estado: %c\n", estado_2);
	printf("Codigo: %s\n", codigo_2);
	printf("Nome da cidade: %s\n", nome_cidade2);
	printf("Populacao: %d\n", populacao_2);
	printf("A area em quilometros quadrados: %.2f\n", area_2);
	printf("PIB: %.2f\n", pib_2);
	printf("Quantidade de pontos turisticos: %d\n", pontos_turis_2);
	
	return 0;
}