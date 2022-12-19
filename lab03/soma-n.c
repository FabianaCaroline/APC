#include <stdio.h>

int main(){
    int linhas = 0;
    int soma = 0;
    int aux = 0;

    scanf("%d", &linhas);

    for(int i = 0; i < linhas; i++){
        scanf("%d",&aux);
        soma += aux;
    }

    printf("%d\n", soma);

    return 0;
}