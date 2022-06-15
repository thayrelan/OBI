#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Funcão que descobre a pontuação das cartas de um jogador*/
int pontuacao_jogador(char Cartas_jogador[3][2], char Carta_dominante[2]){

    int i = 0, pontuacao = 0; 

    while(i < 3){
        scanf("%s", Cartas_jogador[i]);
        if(Carta_dominante[1] == Cartas_jogador[i][1]){
            if(Cartas_jogador[i][0] == 'A'){
                pontuacao = pontuacao + 14; 
            }
            if(Cartas_jogador[i][0] == 'J'){
                pontuacao = pontuacao + 15;
            }
            if(Cartas_jogador[i][0] == 'Q'){
                pontuacao = pontuacao + 16;
            }
            if(Cartas_jogador[i][0] == 'K'){
                pontuacao = pontuacao + 17;
            }
        }
        else{
            if(Cartas_jogador[i][0] == 'A'){
                pontuacao = pontuacao + 10; 
            }
            if(Cartas_jogador[i][0] == 'J'){
                pontuacao = pontuacao + 11;
            }
            if(Cartas_jogador[i][0] == 'Q'){
                pontuacao = pontuacao + 12;
            }
            if(Cartas_jogador[i][0] == 'K'){
                pontuacao = pontuacao + 13;
            }
        }
        i++; 
    }

    return pontuacao;
}


int main(){

    /*Declaração de variáveis e obtenção dos dados que serão usados*/
    char Cartas_jogador[3][2], Carta_dominante[2];
    int i = 0, Luana = 0, Edu = 0;

    scanf("%s", Carta_dominante);
    while(i != 3){
        scanf("%s", Cartas_jogador[i]);
        i++;
    }
    /*Chamada da função para descobrir a pontuação de Luana*/
    Luana = pontuacao_jogador(Cartas_jogador, Carta_dominante);
    while(i != 3){
        scanf("%s", Cartas_jogador[i]);
        i++;
    }
    /*Chamada da função para descobrir a pontuação de Edu*/
    Edu = pontuacao_jogador(Cartas_jogador, Carta_dominante);

    /*Compara as pontuações e imprime o resultador de quem é o vencedor, ou se foi empate*/
    if(Luana > Edu){
        printf("pontuacao\n");
    }
    else if (Luana < Edu){
        printf("Edu\n");
    }
    else{
        printf("empate\n");
    }

    return 0; 
}