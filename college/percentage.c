#include <stdio.h>
int main(){
    float a,b,c,d,percentage;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c-");
    scanf("%f",&c);
    printf("enter d");
    scanf("%f",&d);
    percentage=(a+b+c+d)/4;
    printf("percentage=%f",percentage);
    return 0;
} 