//Q.9 power eg. 2^7
#include <stdio.h>
int main()
{
    int n,power,res=1,i;
    printf("\n Enter base and power");
    scanf("%d%d",&n,&power);
    for(i=1;i<=power;i++)
    {
      res=res*n;  
    }
    printf("\n The res = %d", res);
    return 0;}