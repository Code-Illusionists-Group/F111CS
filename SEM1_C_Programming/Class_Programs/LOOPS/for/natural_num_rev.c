// Q.2 Natural no reverse (option 1)


#include <stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
        printf("\n %d",i);
    }

    return 0;
}



//Natural no reverse (option 2)
#include <stdio.h>
int main()
{
    int i=10;
    for(;i>=1;i--)
    {
        printf("\n %d",i);
    }

    return 0;
}



//Natural no reverse (option 3)
#include <stdio.h>
int main()
{
    int i=10;
    for(;i>=1;)
    {
        printf("\n %d",i);
        i--;
    }

    return 0;
}
