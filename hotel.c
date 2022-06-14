#include <stdio.h>
#include <stdlib.h>
#define ferias 32

int main(){

    int valor_diaria, aumento, chegada, estadia, total = 0;

    scanf("%d%d%d", &valor_diaria, &aumento, &chegada);

    estadia = ferias - chegada; 
    if(chegada >= 16){
        aumento = aumento * 14;
        
    }
    else{
        aumento = aumento * (chegada-1);
    }
    

    total = (estadia * (valor_diaria + aumento));
    printf("%d\n", total);



    return 0; 
}