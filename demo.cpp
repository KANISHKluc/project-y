#include<stdio.h>
#include<conio.h>
int main()
{
	float a, b, add, sub, multi, div;
	
	printf("enteer the values");
	scanf("%f %f",&a, &b);
	add=a+b;
	printf("addition is= %f\n",add);
	sub=a-b;
	printf("substraction is= %f\n",sub);
	multi=a*b;
	printf("multiplication is= %f\n",multi);
	div=a/b;
	printf("divission is= %f\n",div);
	getch();
}
