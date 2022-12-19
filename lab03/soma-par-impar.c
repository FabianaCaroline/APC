#include <stdio.h>

int main(){
    int soma = 0;
    int aux = 0;
    int somaImpar = 0;

    do{
        scanf("%d",&aux);
        if ((aux%2) == 0)
        {
            soma += aux;
        } else{
            somaImpar += aux;
        }
        
    } while(aux != 0);

    printf("%d %d\n", soma, somaImpar);

    return 0;
}