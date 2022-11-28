#include<stdio.h>

int main(){
    unsigned long long int cpf = 0;
    long long int soma = 0;
    int digitos[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%lld", &cpf);

    for(int i = 10; i >= 0; i--){
        digitos[i] = cpf%10;
        cpf = cpf/10;
    }

    for(int i = 9; i >= 1; i--){
        soma += digitos[i-1]*i;
    }

    if((soma%11 == digitos[9]) || ((soma%11 == 10)&&(digitos[9] == 0))){
        soma = 0;
        for(int i = 9; i >= 0; i--){
        soma += digitos[i]*i;
        }
        if((soma%11 == digitos[10]) || ((soma%11 == 10)&&(digitos[10] == 0))){
            printf("valido\n");
        } else{
            printf("invalido\n");
        }
    } else{
        printf("invalido\n");
    }

    return 0;
}