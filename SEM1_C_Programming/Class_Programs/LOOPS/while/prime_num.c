//Q.6 Prime no (option 1) 
#include <stdio.h>
int main()
{
    int num,count=2,flag=1;
    printf("Enter any number");
    scanf("%d",&num);
    while(count<num) // count<=num-1
    {
        if(num%count==0)
        {
            printf("\n It is NOT a prime number");
            break;
        }
        count++;
    }
    if(count==num) printf("\n Its a prime number");

    return 0;
}



//Prime no (option 2) 
#include <stdio.h>
int main()
{
    int num,count=2,divide=0;
    printf("Enter any number");
    scanf("%d",&num);
    while(count<num) // count<=num-1
    {
        if(num%count==0)
        {
            divide++;
        }
        count++;
    }
    if(divide==0) printf("\n Its a prime number");
    else printf("\n Its NOT a prime number");

    return 0;
}



//Prime no (option 3) 
#include <stdio.h>
int main()
{
    int num,count=2,prime=1;
    printf("Enter any number");
    scanf("%d",&num);
    while(count<num) // count<=num-1
    {
        if(num%count==0)
        {
            prime=0;
            break;
        }
        count++;
    }
    if(prime==1) printf("\n Its a prime number");
    else printf("\n Its NOT a prime number");

    return 0;
}
