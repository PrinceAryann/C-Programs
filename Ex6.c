/*Write a program to check whether a character is an alphabet or vowels*/
#include<stdio.h>
void main()
{
	char a;
	printf("Enter a random Alphabet: ");
	scanf("%c",&a);
	if ((a>='a' && a<='z')||(a>='A' && a<='Z'))     /*Condition used to check whether the character is an Alphabet or not.*/
		{
            printf("The character %c is an Alphabet.\n",a);
            if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')   /*Nested If else to check whether the Alphabet is a vowel or Consonent*/
		        printf("The character %c is also a Vowel.\n",a);
            else
                printf("The character %c is a Consonant.\n",a);
        }
	else        /*Final else statement if the character is not an Alphabet.*/
		printf("The character %c is not an Alphabet.\n",a);
		
}