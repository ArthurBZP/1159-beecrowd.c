#include <stdio.h>

int main(){
    
    int X, i, soma_pares;

    scanf("%d", &X);

while (X != 0){
    soma_pares = 0; 

    if (X%2 != 0){
        X++;
    }

    for (i = 1; i <= 5; i++){
        soma_pares += X;
        X += 2;
    }
    printf("%d\n", soma_pares);
    scanf("%d", &X);
}
    return 0;
}