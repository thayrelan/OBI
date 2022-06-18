#include <stdio.h>
#include <stdlib.h>


int main(){

    int total_figurinhas, total_carimbadas, total_compradas, *carimbadas, *compradas;
    int i = 0, total = 0; 
    scanf("%d%d%d", &total_figurinhas, &total_carimbadas, &total_compradas);

    carimbadas = (int *) malloc (sizeof(int) * total_carimbadas);
    compradas = (int *) malloc (sizeof(int) * total_compradas);
 

    while(i != total_carimbadas){
        scanf("%d", &carimbadas[i]);
        i++;
    }
    i = 0; 
    while(i != total_compradas){
        scanf("%d", &compradas[i]);
        i++;
    }
    for(i = 0; i < total_carimbadas; i++){
        for(int j = 0; j < total_compradas; j++){
            if(carimbadas[i] == compradas[j]){
                total++; 
                break;
            }
        }
    }
    printf("%d\n", total_carimbadas-total);
    free(compradas);
    free(carimbadas);

    return 0; 
}