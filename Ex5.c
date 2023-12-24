/*Write a program to check whether a character is an alphabet or not.*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter a random Character: ");
	scanf("%c",&a);
	if ((a>='a' && a<='z')||(a>='A' && a<='Z')) /*Condition used to check the random character to be an Alphabet*/
		printf("The character %c is an Alphabet.",a);
	else
		printf("The character %c is not an Alphabet.",a);
}