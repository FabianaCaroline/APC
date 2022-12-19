#include <stdio.h>

int main(){
    int linhas = 0;
    int maior = 0;
    int aux = 0;

    scanf("%d", &linhas);
    scanf("%d", &maior);

    for(int i = 0; i < (linhas-1); i++){
        scanf("%d",&aux);
        if(aux > maior){
            maior = aux;
        }
    }

    printf("%d\n", maior);

    return 0;
}