#include <stdio.h>
int main(){
    int number;
    printf("enter the number to check");
    scanf("%d",&number);
    if (number>0) {
        printf("number is positive");
    }
    else if (number<0) {
        printf("number is negative");
    }
    else if (number==0) {
        printf("number is zero");
    }
    else{
        printf("cant say");
    }
    return 0;
}