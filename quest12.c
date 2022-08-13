#include<stdio.h>
int main()
{
    float inr;
    float usd;
    printf("enter the INR");
    scanf("%f",&inr);
    usd = inr / 76.23;
    printf("%f USD",usd);
    return 0;
}