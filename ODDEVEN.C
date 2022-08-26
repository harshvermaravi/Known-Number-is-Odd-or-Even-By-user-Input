#include<stdio.h>
void main()
{
	int num,rem;
	clrscr();
	printf("Enter a number for known number is even or odd: ");
	scanf("%d",&num);
	rem = num % 2;
	if (rem==0)
		printf("Number is Even %d\n",num);
	else
		printf("Numbr is odd %d\n",num);
	getch();
}