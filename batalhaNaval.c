#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main () {

int tabuleiro[LINHAS][COLUNAS]={0};
int i, j;

printf("Bem Vindo ao jogo Batalha-Naval \n");
printf("O tabuleiro esta vazio \n");

for(i=0; i<LINHAS;i++) {
    for(j=0; j<COLUNAS; j++){
        printf("%d",tabuleiro[i][j]);
    } printf("\n");
}
//Criando matrizes de habilidades:

printf(" Criando as habilidades");
printf("Cone");
printf("A Habilidade cone será representada com o numero 1 \n");

//Habilidade Cone: 

for(i=0; i<LINHAS;i++) {
    for(j=0; j<COLUNAS; j++){
        if(tabuleiro[i][j]==0){
            tabuleiro[0][7]=1;
            tabuleiro[1][7]=1;
            tabuleiro[1][7-1]=1;
            tabuleiro[1][7+1]=1;
            tabuleiro[2][7]=1;
            tabuleiro[2][7-1]=1;
            tabuleiro[2][7-2]=1;
            tabuleiro[2][7+1]=1;
            tabuleiro[2][7+2]=1;
        }
        printf("%d",tabuleiro[i][j]);
    } printf("\n");

    printf("Cruz \n");
    printf("A habilidade cruz será representada com o número 2 \n"),
// Habilidade cruz:
for(i=0; i<LINHAS; i++){
    for(j=0; j<COLUNAS; j++){
    if(tabuleiro[i][j]==0){
        tabuleiro[3][3]=2;
        tabuleiro[3][3-1]=2;
        tabuleiro[3][3-2]=2;
        tabuleiro[3][3+1]=2;
        tabuleiro[3][3+2]=2;
        tabuleiro[3-1][3]=2;
        tabuleiro[3-2][3]=2;
        tabuleiro[3+1][3]=2;
        tabuleiro[3+2][3]=2;
    } printf("%d", tabuleiro[i][j]);
} printf("\n");
}
printf("Octaedro \n ");
printf("A habilidade octaedro será representada com o número 3 \n");
//Habilidade octaedro:
for(i=0; i<LINHAS; i++){
    for(j=0; j<COLUNAS; j++){
    if(tabuleiro[i][j]==0){
        tabuleiro[8][7]=3;
        tabuleiro[8][7-1]=3;
        tabuleiro[8][7+1]=3;
        tabuleiro[8-1][7]=3;
        tabuleiro[8+1][7]=3;

    } printf("%d", tabuleiro[i][j]);
} printf("\n");
}    

    return 0;