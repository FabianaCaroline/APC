#include<stdio.h>

int main(){
    int numeros[3] = {0, 0, 0};
    int maior = 0;

    //Lendo os numeros
    scanf("%d %d %d %d", &maior, &numeros[0], &numeros[1], &numeros[2]);

    for (int i = 0; i < 3; i++)
    {
        if (numeros[i]>maior){
            maior = numeros[i];
        }
    }

    printf("%d\n", maior);

    return 0;
}