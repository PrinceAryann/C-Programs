/*Write a Program to detect odd and even integers provided by user.*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a random number: ");
    scanf("%d",&num);
    if (num%2==0)           /*condition used to check whether the integer is odd or even.*/
    	printf("The number %d is even.",num);
    else
    	printf("The number %d is odd.",num);
}