//Q.5 Table of any number (option 1)
#include <stdio.h>
int main()
{
    int table, count;
    printf("\n Enter whose table ypu want to print?");
    scanf("%",&table);
     count=table;
    while(count<=table*10) // while(i<6)
    {
   printf("\n %d",count);
    count= count+table; // count++; or count+=1;
    }
    return 0;
}


//Table of any number (option 2)
#include <stdio.h>
int main()
{
    int table, count;
    printf("\n Enter whose table ypu want to print?");
    scanf("%d",&table);
     count=1;
    while(count<=10)
    {
   printf("\n %d * %d= %d",table,count, table*count);
    count++; // count=count+1; or count+=1;
    }
    return 0;
}
