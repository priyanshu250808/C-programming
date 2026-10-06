#include <stdio.h>
int main(){
    int p,r,t, simple_interest;
    printf("enter principle amount=");
    scanf("%d",&p);
    printf("enter rate of interest=");
    scanf("%d",&r);
    printf("enter time=");
    scanf("%d",&t);
    simple_interest=(p*r*t)/100;
    printf("simple interest=%d",simple_interest);
    return 0;
}