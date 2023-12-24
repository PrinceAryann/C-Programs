/*Write a program and check whether the triangle is equilateral or scalene*/
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("Enter the sides of Triangle: \n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if (a==b && b==c && c==a)       /*Condition used to check whether the triangle is Equilateral or Scalene.*/
		printf("The Triangle with sides %f,%f,%f is Equilateral triangle.",a,b,c);
	else
		printf("The Triangle with sides %f,%f,%f is Scalene triangle.",a,b,c);
}