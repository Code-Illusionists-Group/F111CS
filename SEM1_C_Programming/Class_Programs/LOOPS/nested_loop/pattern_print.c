//Pattern Priniting 


// First Quesition

/*
 OUTPUT:

*
**
***

*/



#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
    return 0;
}





// Second Question

/*
 OUTPUT:

1
12
123

*/



#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    }
    return 0;
}




// Third Question

/*
 OUTPUT:

1
22
333

*/



#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
    return 0;
}
