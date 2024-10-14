// /Q.5 Prime or not
#include <stdio.h>
int main()
{
    int n,i,flag=1;
    printf("\n enter a number");
    scanf("%d",&n);
     for (i=2;i<n;i++)//while(n>0)
    {
        if(n%i==0)
        {
           flag=0;
           break; // out of for loop
        }
    }
    if(flag==1) printf("\n Prime no");
    else printf("\n Not prime");
    return 0;
}