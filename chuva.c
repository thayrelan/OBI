#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int Medicoes, valor, valor_medicao[100000], i = 0, j = 0, temp; 
    int soma, total = 0, a, b; 


    a = clock();
    scanf("%d%d", &Medicoes, &valor);

    //valor_medicao = (int *) malloc (sizeof(int) * Medicoes);


    temp = Medicoes; 

    
    while(temp!=0){
        scanf("%d", &valor_medicao[i]);
        i++;
        temp--;
    }

    for(i = 0; i < Medicoes; i++){
        soma = valor_medicao[i];
        if(soma == valor){
            total++;
        }
        for(j = i+1; j < Medicoes; j++){
            soma = valor_medicao[j] + soma
            /*Adesão pós término de prova*/
            /*if(soma > valor){
                break; 
            }*/
            if(soma == valor){
                total++;
            } 
        }
        soma = 0; 
    }
    b = clock();
    printf("%d\n", b-a);


    return 0; 
}