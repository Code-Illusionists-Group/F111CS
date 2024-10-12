// Write a program whcih takes a user input chararcter value and print if its vowel or a consonant or any invalid alphabet using switch statement. 


#include <stdio.h>
int main(){
	char c;
	printf("Enter your character: ");
	scanf("%c",&c);
	if (c>='A' && c <= 'Z' || c>='a' && c <= 'z')
	{
		switch(c)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':printf("It's a Vowel \n");break;
			default: printf("It's a Consonant \n");
		}
	}
	else
	printf("%c is not a valid Alphabet \n",c);
return 0 ;
}
