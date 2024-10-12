//Q.3 WAP to convert AED into dollar
 #include <stdio.h> // standarad input output header file
int main()  // function
{   
    // body of main
    float aed,dollar; // variable declaration
    printf("\n Enter amount in AED");
    scanf("%f",&aed);  // input, %f placeholder, &aed = address of aed
    dollar=aed/3.67;
    
    printf("\n Dollar = %f", dollar); // printing result style 1
    printf("\n %f  / 3.67 = %f" , aed, dollar); // printing result style 
    printf("\n %f " , aed/3.67); // printing result style 
    return 0;
}

/*
Or
#include <stdio.h> // standard input output header file
int main()  // function
{   // body of main
    float aed; // variable declaration
    printf("\n Enter amount in AED");
    scanf("%f",&aed);  // input, %f placeholder, &aed = address of aed
    printf("\n Dollar = %f", aed/3.67); // printing result style 1
    printf("\n %f  / 3.67 = %f" , aed, aed/3.67); // printing result style 
    return 0;
}*/