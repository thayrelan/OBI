#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    /*Declaração de Variáveis*/
    int Medicoes, valor, *valor_medicao, i = 0, j = 0, temp; 
    int soma, total = 0, a, b; 

    /*Leitura da quantidade de medições feitas, e do valor a ser comparado*/
    scanf("%d%d", &Medicoes, &valor);
    valor_medicao = (int *) malloc (sizeof(int) * Medicoes);
    temp = Medicoes; 

    /*Leitura de todas as medições feitas*/
    while(temp!=0){
        scanf("%d", &valor_medicao[i]);
        i++;
        temp--;
    }

    /*Leitura das medições realizadas*/
    for(i = 0; i < Medicoes; i++){
        soma = valor_medicao[i];
        if(soma == valor){
            total++;
        }
        for(j = i+1; j < Medicoes; j++){
            soma = valor_medicao[j] + soma;
            if(soma > valor){
                break; 
            }
            if(soma == valor){
                total++;
            } 
        }
        soma = 0; 
    }

    /*Quantidade de periodos existentes cuja a soma das medições neste periodo é igual ao valor
      previamente inserido*/
    printf("%d\n", total);

    return 0; 
}