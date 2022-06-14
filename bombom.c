#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char vet[6][2], dom[2];
    int i = 0, j  = 0, Luana = 0, Edu = 0;
    int p_l, p_a;

    scanf("%s", dom);
    while(i < 3){
        scanf("%s", vet[i]);
        if(dom[1] == vet[i][1]){
            if(vet[i][0] == 'A'){
                Luana = Luana + 14; 
            }
            if(vet[i][0] == 'J'){
                Luana = Luana + 15;
            }
            if(vet[i][0] == 'Q'){
                Luana = Luana + 16;
            }
            if(vet[i][0] == 'K'){
                Luana = Luana + 17;
            }
        }
        else{
            if(vet[i][0] == 'A'){
                Luana = Luana + 10; 
            }
            if(vet[i][0] == 'J'){
                Luana = Luana + 11;
            }
            if(vet[i][0] == 'Q'){
                Luana = Luana + 12;
            }
            if(vet[i][0] == 'K'){
                Luana = Luana + 13;
            }
        }
        i++; 
    }
    
    i = 0;
    while(i < 3){
        scanf("%s", vet[i+3]);
        if(dom[1] == vet[i+3][1]){
            if(vet[i+3][0] == 'A'){
                Edu = Edu + 14; 
            }
            if(vet[i+3][0] == 'J'){
                Edu = Edu + 15;
            }
            if(vet[i+3][0] == 'Q'){
                Edu = Edu + 16;
            }
            if(vet[i+3][0] == 'K'){
                Edu = Edu+ 17;
            }
        }
        else{
            if(vet[i+3][0] == 'A'){
                Edu = Edu + 10; 
            }
            if(vet[i+3][0] == 'J'){
                Edu = Edu + 11;
            }
            if(vet[i+3][0] == 'Q'){
                Edu= Edu + 12;
            }
            if(vet[i+3][0] == 'K'){
                Edu = Edu + 13;
            }
        }
        i++; 
    }
    if(Luana > Edu){
        printf("Luana\n");
    }
    else if (Luana < Edu){
        printf("Edu\n");
    }
    else{
        printf("empate\n");
    }
    /*while(j < 7){

        printf("%s\n", vet[j]);
        j++;
    }*/



    return 0; 
}