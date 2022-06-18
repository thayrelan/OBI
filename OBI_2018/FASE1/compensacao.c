#include <stdio.h>
#include <stdlib.h>


typedef struct pop{

    int Deve;
    int Tem;
    int Situ; 

}cidadao; 
int main(){

    int cheques, valor, total_pop, emissor, recebidor, saldo_pst = 0, saldo_ngt = 0, i = 0; 
    cidadao * pop;

    scanf("%d%d", &cheques, &total_pop);
    pop = (cidadao*) malloc (sizeof(cidadao) * total_pop);

    while(i<cheques){
        scanf("%d%d%d", &emissor, &valor, &recebidor);
        pop[emissor-1].Deve = valor + pop[emissor-1].Deve; 
        pop[recebidor-1].Tem = valor+ pop[recebidor-1].Tem;
        saldo_pst = valor + saldo_pst; 
        i++;
    }
    
    i =0;
    while(i<total_pop){
        pop[i].Situ = pop[i].Tem - pop[i].Deve; 
        i++;
    }
     i= 0; 
    while(i<total_pop){
        if(pop[i].Situ < 0){
            saldo_ngt = saldo_ngt + pop[i].Situ;
        }
        i++;
    }

    if(saldo_pst > (saldo_ngt*(-1))){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    printf("%d\n", saldo_ngt*(-1));
    free(pop);

    return 0; 
}