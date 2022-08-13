#include<stdio.h>
int main()
{
    int x=432;
    int rem=0,sum=0;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    sum=sum+rem;
    rem=x%10;
    x=x/10;
    printf("\nFirst Digit  = %d \nSecond Digit = %d \nLast Digit   = %d\n",4,3,2);
      sum=sum+rem;
      printf("\nSum of All 3-Digits : %d",sum);
   
    return 0;
    

}