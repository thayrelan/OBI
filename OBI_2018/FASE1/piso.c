#include <stdio.h>
#include <stdlib.h>


int main(){

    int L, C, piso2, piso1;
    scanf("%d%d", &L, &C);
    piso2 = ((C-1)*2)+((L-1)*2);
    piso1 = ((C * L))+((C-1)*(L-1));
    printf("%d\n%d\n", piso1, piso2);
    return 0; 
}