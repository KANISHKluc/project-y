#include<conio.h>
#include<stdio.h>
int main()

{
	int a, b;
	printf("enter two no.");
	scanf("%d%d",&a, &b);
	if (a>b)
	{
		printf("a is the largest value %d",a);
	}
else
	{
		printf("b is the largest value %d",b);
    }
	getch();
}

