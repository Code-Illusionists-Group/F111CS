//Q.8  program to which takes min and hours as input, gives total minutes as output 

#include <stdio.h> // standarad input output header file
int main()  // function
{   // body of main
    int m,h,t; // variable declaration
    printf("\n Enter hours and minutes");
    scanf("%d %d",&h, &m);  // input, %d placeholder (int), & = address
     t=h*60+m;
    printf("\n Total min= %d", t); // printing result 
    return 0;
}