#include<stdio.h>

int main(){
    int jogadas[3] = {0, 0, 0};

    //Entrada das jogadas
    scanf("%d %d %d", &jogadas[0], &jogadas[1], &jogadas[2]);

    if (jogadas[0] == 1){
        if (jogadas[1]==1){
            if(jogadas[2]==1){
                printf("empate\n"); //1
            } else{
                printf("C\n");
            }    
        } else if(jogadas[2]==0){
            printf("A\n");
        } else{
            printf("B\n");
        } 
    } else if(jogadas[1]==0){
        if(jogadas[2]==0){
            printf("empate\n"); //0
        } else{
            printf("C\n");
        }
    } else{
        if(jogadas[2]==0){
            printf("B\n");
        } else{
            printf("A\n");
        }
    }
    return 0;
}