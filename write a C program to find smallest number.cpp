#include<conio.h>
#include<stdio.h>
int main()

{
	int a, b, c;
	printf("enter three no.");
	scanf("%d %d %d",&a, &b, &c);
	if (a<b && a<c)
	{
		printf("a is the smallest value");
	}
	else if (b<a && b<c)
	{
		printf("b is the smallest value");
	}
	else
	{
		printf("c is the smallest value value");
	}
	getch();
}

