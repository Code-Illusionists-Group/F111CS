//Q.4 Reverse of a number
#include <stdio.h>
int main()
{
    int n, rem,rev=0;
    printf("\n enter a number");
    scanf("%d",&n);
     for (;n>0;n/=10)//while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("\n %d",rev);
    return 0;
}