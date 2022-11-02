#include<stdio.h>

int main(void)
{
	int a, b, c;

	
	printf("enter a number: ");
	scanf("%d", &a);
	printf("enter another number: ");
	scanf("%d", &b);
	c = a*b;
	printf("the result of %d times %d is %d\n", a, b, c);
	return (0);
}
