#include <stdio.h>

int main(){
    int linhas = 0;
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++)
    {
        if((i%2)==0){
            for(int i = 0; i < 6; i++){
                printf("THUMS ");
            }
                printf("\n");
        } else{
            for(int i = 0; i < 3; i++){
                printf("THUMS ");
            }
            printf("\n");
        }
    }

    return 0;
}