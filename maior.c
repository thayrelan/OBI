#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, m, s, i;
    int temp, temp2, soma; 
    int a = 0, b = 0, c = 0; 
    int d = 0, e = 0, f = 0; 
    int numero = -1; 

    soma = 0;  

    scanf("%d%d%d", &n, &m, &s);

    

    for(temp = n; temp <= m; temp++){
        if(temp == 10000){
            soma = 1;
        }
        else if(temp >= 1000){
            a = temp%1000;
            b = a%100; 
            c = b%10;
            d = (b-c)/10;
            e = (a-b)/100;
            f = (temp-a)/1000;
            soma = f + e + d + c; 
        }
        else if(temp >= 100){
            b = temp%100; 
            c = b%10;
            d = (b-c)/10;
            f = (temp-b)/100;
            soma = f + d + c; 
            
        }  
        else if(temp >= 10){
            b = temp%10; 
            c = b%10;
            f = (temp-c)/10;
            soma = f + c; 
        }
        else{
            soma = temp; 
        }
        if(soma == s){
            numero = temp; 
        }

    }
    printf("%d\n", numero);

    return 0;
}