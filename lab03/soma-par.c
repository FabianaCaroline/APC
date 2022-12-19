#include <stdio.h>

int main(){
    int soma = 0;
    int aux = 0;

    do{
        scanf("%d",&aux);
        if ((aux%2) == 0)
        {
            soma += aux;
        }
        
    } while(aux != 0);

    printf("%d\n", soma);

    return 0;
}