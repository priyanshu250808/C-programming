#include <stdio.h>
char main(){
    int value;
    printf("value");
    scanf("%d",&value);
    if (value==0){
        printf("SUNDAY");
    }
    else if (value==1){
        printf("MONDAY");
    }
    else if (value==2){
        printf("TUESDAY");
    }
    else if (value==3){
        printf("WEDNESDAY");
    }
    else if (value==4){
        printf("THURSDAY");
    }
    else if (value==5){
        printf("FRIDAY");
    }
    else if (value==6){
        printf("SATURDAY");
    }
    else {
        printf("out of data");
    }
    return 0;
}