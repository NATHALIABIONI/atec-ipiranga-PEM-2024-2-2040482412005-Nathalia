#include <stdio.h>

void inicializaTabuleiro(char tabuleiro[8][8][4]) {
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tabuleiro[i][j][0] = 'X';  
            tabuleiro[i][j][1] = '\0';  
        }
    }

    tabuleiro[7][0][0] = 'B'; tabuleiro[7][0][1] = 'T'; tabuleiro[7][0][2] = '1'; tabuleiro[7][0][3] = '\0'; 
    tabuleiro[7][1][0] = 'B'; tabuleiro[7][1][1] = 'C'; tabuleiro[7][1][2] = '1'; tabuleiro[7][1][3] = '\0'; 
    tabuleiro[7][2][0] = 'B'; tabuleiro[7][2][1] = 'B'; tabuleiro[7][2][2] = '1'; tabuleiro[7][2][3] = '\0'; 
    tabuleiro[7][3][0] = 'B'; tabuleiro[7][3][1] = 'D'; tabuleiro[7][3][2] = '\0';                          
    tabuleiro[7][4][0] = 'B'; tabuleiro[7][4][1] = 'R'; tabuleiro[7][4][2] = '\0';                          
    tabuleiro[7][5][0] = 'B'; tabuleiro[7][5][1] = 'B'; tabuleiro[7][5][2] = '2'; tabuleiro[7][5][3] = '\0'; 
    tabuleiro[7][6][0] = 'B'; tabuleiro[7][6][1] = 'C'; tabuleiro[7][6][2] = '2'; tabuleiro[7][6][3] = '\0'; 
    tabuleiro[7][7][0] = 'B'; tabuleiro[7][7][1] = 'T'; tabuleiro[7][7][2] = '2'; tabuleiro[7][7][3] = '\0'; 

    for (j = 0; j < 8; j++) {
        tabuleiro[6][j][0] = 'B';
        tabuleiro[6][j][1] = 'P';
        tabuleiro[6][j][2] = '1' + j;
        tabuleiro[6][j][3] = '\0';
    }

    tabuleiro[0][0][0] = 'P'; tabuleiro[0][0][1] = 'T'; tabuleiro[0][0][2] = '1'; tabuleiro[0][0][3] = '\0'; 
    tabuleiro[0][1][0] = 'P'; tabuleiro[0][1][1] = 'C'; tabuleiro[0][1][2] = '1'; tabuleiro[0][1][3] = '\0'; 
    tabuleiro[0][2][0] = 'P'; tabuleiro[0][2][1] = 'B'; tabuleiro[0][2][2] = '1'; tabuleiro[0][2][3] = '\0'; 
    tabuleiro[0][3][0] = 'P'; tabuleiro[0][3][1] = 'D'; tabuleiro[0][3][2] = '\0';                          
    tabuleiro[0][4][0] = 'P'; tabuleiro[0][4][1] = 'R'; tabuleiro[0][4][2] = '\0';                          
    tabuleiro[0][5][0] = 'P'; tabuleiro[0][5][1] = 'B'; tabuleiro[0][5][2] = '2'; tabuleiro[0][5][3] = '\0'; 
    tabuleiro[0][6][0] = 'P'; tabuleiro[0][6][1] = 'C'; tabuleiro[0][6][2] = '2'; tabuleiro[0][6][3] = '\0'; 
    tabuleiro[0][7][0] = 'P'; tabuleiro[0][7][1] = 'T'; tabuleiro[0][7][2] = '2'; tabuleiro[0][7][3] = '\0'; 

    for (j = 0; j < 8; j++) {
        tabuleiro[1][j][0] = 'P';
        tabuleiro[1][j][1] = 'P';
        tabuleiro[1][j][2] = '1' + j;
        tabuleiro[1][j][3] = '\0';
    }
}

void imprimeTabuleiro(char tabuleiro[8][8][4]) {
    int i, j;
    
    printf("   a    b    c    d    e    f    g    h\n");

    for (i = 0; i < 8; i++) {
        printf("%d ", 8 - i); 
        for (j = 0; j < 8; j++) {
            printf("[%-3s]", tabuleiro[i][j]);  
        }
        printf(" %d\n", 8 - i);  
    }

    printf("   a    b    c    d    e    f    g    h\n");
}

int main() {
    char tabuleiro[8][8][4];  

    inicializaTabuleiro(tabuleiro);  
    imprimeTabuleiro(tabuleiro);     

    return 0;
}

