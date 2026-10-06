#include <stdio.h>
int main(){
    float a, b, c, d;
    float a_percent, b_percent, c_percent, d_percent;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    printf("enter c-");
    scanf("%f",&c);
    printf("enter d");
    scanf("%f",&d);
    a_percent = a / (a + b + c + d) * 100;
    b_percent = b / (a + b + c + d) * 100;
    c_percent = c / (a + b + c + d) * 100;
    d_percent = d / (a + b + c + d) * 100;
    printf("percentage a=%f\n", a_percent);
    printf("percentage b=%f\n", b_percent);
    printf("percentage c=%f\n", c_percent);
    printf("percentage d=%f\n", d_percent);
    return 0;
}
