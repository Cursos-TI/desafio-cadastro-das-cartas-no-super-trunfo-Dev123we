/* Este programa seria uma simulação do jogo Batalha Naval,
   onde seria representado por 4 navios, um na horizontal,
   outro na vertical e dois na diagonais. Foi necessário
   utilizar matrizes operando junto com loops aninhados e 
   estruturas condicionais para criar figuras como a cone, 
   a cruz e o octaedro. */
   
#include <stdio.h>
#include <stdlib.h>

#define TAM_TAB 10
#define TAM_HAB 5

int main() {
    // Criar tabuleiro 10x10 inicializado com água (0)
    int Tabuleiro[TAM_TAB][TAM_TAB] = {0};

    //  Posicionar navios  manualmente
    // Navio horizontal
    Tabuleiro[1][3] = 3; Tabuleiro[1][4] = 3; Tabuleiro[1][5] = 3;
    // Navio vertical
    Tabuleiro[5][4] = 3; Tabuleiro[6][4] = 3; Tabuleiro[7][4] = 3;
     
    /* Esse loop é responsável por estar imprimindo o navio que ficará
	na diagonal principal.  */
	for(int i=0; i < 3; i++){
		Tabuleiro[i][i] = 3;
	}
	
	/* Esse loop é responsável por estar imprimindo o navio que ficará
	   na diagonal secundária.  */
	for(int i=0; i < 3; i++){
		Tabuleiro[i][9 - i] = 3;
	}

    // Criar matrizes de habilidades 5x5 (0 = não afeta, 1 = afeta)
    int Cone[TAM_HAB][TAM_HAB] = {0};
    int Cruz[TAM_HAB][TAM_HAB] = {0};
    int Octaedro[TAM_HAB][TAM_HAB] = {0};
    

    // Esse loop é o responsável em criar a habilidade do cone
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(j >= 2-i && j <= 2+i) {  
                Cone[i][j] = 1;
            }
        }
    }
    
        // Esse loop é o responsável por construir a habilidade da cruz
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(i == 2 || j == 2) {  
                Cruz[i][j] = 1;
            }
        }
    }

    // Esse loop é o responsável por construir a habilidade do octaedro
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(abs(2-i) + abs(2-j) <= 2) {  
                Octaedro[i][j] = 1;
            }
        }
    }


    // Definir pontos de origem no tabuleiro
    int ConeX = 4, ConeY = 4;
    int CruzX = 7, CruzY = 2;
    int OctaX = 1, OctaY = 6;

    // Sobrepor habilidade Cone no tabuleiro
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(Cone[i][j] == 1) {
                int x = ConeX - 2 + i; // centraliza no ponto de origem
                int y = ConeY - 2 + j;
                if(x>=0 && x<TAM_TAB && y>=0 && y<TAM_TAB && Tabuleiro[x][y]==0) {
                    Tabuleiro[x][y] = 5; // 
                }
            }
        }
    } 

    // Sobrepor habilidade Cruz no tabuleiro
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(Cruz[i][j] == 1) {
                int x = CruzX - 2 + i;
                int y = CruzY - 2 + j;
                if(x>=0 && x<TAM_TAB && y>=0 && y<TAM_TAB && Tabuleiro[x][y]==0) {
                    Tabuleiro[x][y] = 5;
                }
            }
        }
    }

    // Sobrepor habilidade Octaedro no tabuleiro
    for(int i=0; i<TAM_HAB; i++) {
        for(int j=0; j<TAM_HAB; j++) {
            if(Octaedro[i][j] == 1) {
                int x = OctaX - 2 + i;
                int y = OctaY - 2 + j;
                if(x>=0 && x<TAM_TAB && y>=0 && y<TAM_TAB && Tabuleiro[x][y]==0) {
                    Tabuleiro[x][y] = 5;
                }
            }
        }
    }
    
    printf("*** Batalha Naval ***");
    printf("\n");
    
    /* Nesse loop temos a impressão das coordenadas do alfabeto de A-J. */
	printf("   ");
	for(int j=0; j < 10; j++){
		printf(" %c ", 'A' + j);
	}
	printf("\n");

    // Impressão do tabuleiro completo
    for(int i=0; i<TAM_TAB; i++) {
    	printf("%2d ", i);
        for(int j=0; j<TAM_TAB; j++) {
            printf(" %d ", Tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}