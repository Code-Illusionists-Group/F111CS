//Q.6 Count no of digits in a number
#include <stdio.h>
int main()
{
    int n, rem,count=0;
    printf("\n Enter any no");
    scanf("%d",&n);
    for(;n>0;)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    printf("\n %d",count);
    return 0;
}