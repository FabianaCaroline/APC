#include<stdio.h>

int main(){
    int jogoPar1[3] = {0, 0, 0};
    int jogoPar2[3] = {0, 0, 0};
    int jogoFinal[3] = {0, 0, 0};
    char vencedor[2] = {'e', 'e'};

    scanf("%d %d %d", &jogoPar1[0], &jogoPar1[1], &jogoPar1[2]);
    scanf("%d %d %d", &jogoPar2[0], &jogoPar2[1], &jogoPar2[2]);
    scanf("%d %d %d", &jogoFinal[0], &jogoFinal[1], &jogoFinal[2]);

    //Jogo 1
    if(jogoPar1[0]==(jogoPar1[1]+jogoPar1[2])%2){
        vencedor[0] = 'A';
    } else {
        vencedor[0] = 'B';
    }

    //Jogo 2
    if(jogoPar2[0]==(jogoPar2[1]+jogoPar2[2])%2){
        vencedor[1] = 'C';
    } else {
        vencedor[1] = 'D';
    }

    // Jogo Final
    if(jogoFinal[0]==(jogoFinal[1]+jogoFinal[2])%2){
        printf("%c\n", vencedor[0]);
    } else {
        printf("%c\n", vencedor[1]);
    }

    return 0;
}