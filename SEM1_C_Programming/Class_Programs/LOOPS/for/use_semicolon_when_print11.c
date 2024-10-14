// Q.3 use of ; after for loop prints 11
#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++);// i=11 the loop terminates
   
        printf("\n %d",i);

    return 0;
}