//Q.3 Even number (option 1)
#include <stdio.h>
int main()
{
    int count=1;
    while(count<=30) // while(i<6)
    {
   if(count%2==0) printf("\n %d",count);
    count= count+1; // count++; or count+=1;
    }
    return 0;
}