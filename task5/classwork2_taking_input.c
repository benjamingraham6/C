//WAP to perform Arithmetic Operations of two numbers after taking inputs from user.
#include <stdio.h>
int main()
{
	printf("Here we are going to take input from user\n");
	int x,y,sub;
	printf("Enter a first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	sub=x-y;
	printf("The difference of x %d and y %d is %d",x,y,sub);
	return 0;
}


