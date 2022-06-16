#include <stdio.h>
#include <stdlib.h>

#define ferias 32

int main(){

    /*Leitura e declaração das variáveis usadas*/
    int valor_diaria, aumento, chegada, estadia, total = 0;
    scanf("%d%d%d", &valor_diaria, &aumento, &chegada);

    /*Tempo em que a tia passou no hotel*/
    estadia = ferias - chegada;

    /*Calculo do valor que será aumentada apartir do valor da diaria*/ 
    if(chegada >= 16){
        aumento = aumento * 14;
    }
    else{
        aumento = aumento * (chegada-1);
    }

    /*Calculo e impressão do total que será pago*/
    total = (estadia * (valor_diaria + aumento));
    printf("%d\n", total);

    return 0; 
}