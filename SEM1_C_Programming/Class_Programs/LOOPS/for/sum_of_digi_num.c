//Q.8 Sum of digits of a number
#include <stdio.h>
int main()
{
    int n, rem=0,sum=0;
    printf("\n Enter any no");
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        rem=n%10;
        sum=sum+rem;
    }
    printf("\n Sum of digits = %d",sum);
    return 0;
}