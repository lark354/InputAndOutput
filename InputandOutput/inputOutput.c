#include<stdio.h>  //header file allows program to use printf and scanf

int main()
{
	int num;  //declares an integer variable named num
	printf("\nEnter your number ==> ");  //prints out the text
	scanf("%d", &num);  //user enters a number
	getchar();  //gets the character
	printf("Your number is %d \n", num);  //prints out the user's number with text
}