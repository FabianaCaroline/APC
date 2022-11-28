#include<stdio.h>

int main(){
    int B = 0;
    int T = 0;
    float areaTotal = 160 * 70, area1 = 0, area2 = 0;

    scanf("%d", &B);
    scanf("%d", &T);

    area1 = (T*70)+((B-T)*70/2);
    area2 = areaTotal - area1;

    if(area1 > area2){
        printf("1\n");
    } else if(area2 > area1){
        printf("2\n");
    } else{
        printf("0\n");
    }

    return 0;
}