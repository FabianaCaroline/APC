#include<stdio.h>

int main(){
    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a == b){
        printf("empate\n");
    } else if(a == 0){
        if(b == 2 || b == 3){
            printf("A\n");
        } else{
            printf("B\n");
        }
    } else if(a == 1){
        if(b == 0 || b == 4){
            printf("A\n");
        } else{
            printf("B\n");
        }
    } else if(a == 2){
        if(b == 1 || b == 3){
            printf("A\n");
        } else{
            printf("B\n");
        }
    } else if(a == 3){
        if(b == 1 || b == 4){
            printf("A\n");
        } else{
            printf("B\n");
        }
    } else if(a == 4){
        if(b == 0 || b == 2){
            printf("A\n");
        } else{
            printf("B\n");
        }
    }  
    return 0;
}