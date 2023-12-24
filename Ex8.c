/*Write a program that inputs three different integers from the keyboard,
then displays the sum, the average, the product, and
the smallest and the largest of these numbers.*/
#include <stdio.h>
void main()
{
	int j=1,a,b,c,sum,avg,pro,small,large;
	while(j<=3)
	{
		printf("Enter number_%d: ",j);
		switch(j)       /*Implementing Switch statement to continue taking inputs from user for all the required variables.*/
		{
			case 1: scanf("%d",&a);
					j++;
					break;
			case 2: scanf("%d",&b);
					j++;
					break;
			case 3: scanf("%d",&c);
					j++;
					break;
		}
	}
	sum = a+b+c;    /*Implementing formulas to calculate Sum, Average and Product*/
	avg = sum/3;
	pro = a*b*c;
	if (a>b)        /*Implementing conditions to check the smallest and the largest value from the inputs.*/
	{
		if (b>c)
			small = c;
			large = a;
	}
	else if (b<c)
	{	
		if(a<c)
			small = a;
			large = c;
	}
	else if (a<b)
	{
		if (b<c)
			small = a;
			large = c;
	}
	else if (b>c)
	{
		if(a<c)
			small = a;
			large = b;
	}

	printf("Sum of %d, %d, %d is: %d\n",a,b,c,sum);
	printf("Avg of %d, %d, %d is: %d\n",a,b,c,avg);
	printf("Pro of %d, %d, %d is: %d\n",a,b,c,pro);
	printf("Smallest of %d, %d, %d is: %d\n",a,b,c,small);
	printf("Largest of %d, %d, %d is: %d\n",a,b,c,large);
	
}