#include <stdio.h>
int main()
{
	int x, y, divide;
	printf("Enter first number: ");
	scanf("%d",&x);
	printf("Enter second number: ");
	scanf("%d",&y);
	divide=x/y;
	printf("The division of x %d and y %d is %d",x,y,divide);
	return 0;
}
