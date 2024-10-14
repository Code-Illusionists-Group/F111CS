//Q.1 Enter marks in 5 subjects and calculate avg for three students
#include <stdio.h>
int main()
{
    int i,j;float marks,total=0,avg=0;
for(j=1;j<=3;j++) // no of students =3
{
    total=0; avg=0;
    printf("\n Enter marks in 5 subjects");
    for(i=1;i<=5;i++) // no of subjects =5
    {
       scanf("%f",&marks); 
       total=total+marks; // total+=marks;
    }
    avg=total/5;
    printf("\n Avg is : %f",avg);
 }
    return 0;
}
