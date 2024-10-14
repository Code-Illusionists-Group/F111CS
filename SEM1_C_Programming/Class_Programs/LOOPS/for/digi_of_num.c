//Q.7 digits of a no a number (option1)
#include <stdio.h>
int main()
{
    int n, rem;
    printf("\n Enter any no");
    scanf("%d",&n);
    for(;n>0;)
    {
        rem=n%10;
        n=n/10;
        printf("\n %d",rem);
    }
    return 0;
}





// digits of a no a number (option2)
#include <stdio.h>
int main()
{
    int n, rem;
    printf("\n Enter any no");
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        rem=n%10;
       
        printf("\n %d",rem);
    }
    return 0;
}


// digits of a no a number (option3)
#include <stdio.h>
int main()
{
    int n, rem;
    printf("\n Enter any no");
    scanf("%d",&n);
    for(n>0;rem=n%10;n/=10)
        printf("\n %d",rem);
   
    return 0;
}