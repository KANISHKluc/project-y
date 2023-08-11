#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div;
	printf("enter any two numbers\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	char op;
	printf("chose the operation you want to perform from the given operators + , - , * , / \n");
	scanf("%s",&op);
	switch(op)
	{
		case '+' :
			printf("the addition is= %d",add);
			break;
			case '-' :
				printf("the substraction is= %d",sub);
				break;
				case '*' :
					printf("the multiplication is= %d",mul);
					break;
					case '/' :
						printf("the division is= %d",div);
						break;
						default:
							printf("invalid calculation");
							break;
							
	}
	getch();
}
