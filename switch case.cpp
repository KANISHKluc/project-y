#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,sum,sub,mult,div;
	char op;
	printf("enter the values:\n");
	scanf("%f %f",&a,&b);
	printf("chose any one operator from +, -, *, /:\n");
	scanf("%s",&op);
	switch(op)
	{
		case '+' :
			sum=a+b;
			printf("addition=%f\n",sum);
			break;
		case '-' :
			sub=a-b;
			printf("substraction=%f\n",sub);
			break;
		case '*' :
			mult=a*b;
			printf("multiplication=%f\n",mult);
			break;
		case '/' :
			div=a/b;
			printf("division=%f\n",div);
			break;
		default:
			printf("invalid operator");
			break;	
	}
	getch();
}
