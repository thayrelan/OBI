#include <stdio.h>
#include <stdlib.h>


int main(){

    int inc_periodo, fim_periodo, soma_algarismos;
    int temp, temp2, soma; 
    int milesimo = 0, centena = 0, alg_unidade = 0; 
    int alg_dezena = 0, alg_centena = 0, alg_ultimo = 0; 
    int numero = -1; 

    soma = 0;  

    scanf("%d%d%d", &inc_periodo, &fim_periodo, &soma_algarismos);

    

    for(temp = inc_periodo; temp <= fim_periodo; temp++){
        if(temp == 10000){
            soma = 1;
        }
        else if(temp >= 1000){
            milesimo = temp%1000;
            centena = milesimo%100; 
            alg_unidade = centena%10;
            alg_dezena = (centena-alg_unidade)/10;
            alg_centena = (milesimo-centena)/100;
            alg_ultimo = (temp-milesimo)/1000;
            soma = alg_ultimo + alg_centena + alg_dezena + alg_unidade; 
        }
        else if(temp >= 100){
            centena = temp%100; 
            alg_unidade = centena%10;
            alg_dezena = (centena-alg_unidade)/10;
            alg_ultimo = (temp-centena)/100;
            soma = alg_ultimo + alg_dezena + alg_unidade; 
            
        }  
        else if(temp >= 10){
            centena = temp%10; 
            alg_unidade = centena%10;
            alg_ultimo = (temp-alg_unidade)/10;
            soma = alg_ultimo + alg_unidade; 
        }
        else{
            soma = temp; 
        }
        if(soma == soma_algarismos){
            numero = temp; 
        }

    }
    printf("%d\n", numero);

    return 0;
}