#include<conio.h>
#include<stdio.h>
int main()
{
	char day;
	printf("enter no. betweem 1-7:");
	scanf("%s", &day);
	switch(day) 
	{
		case '1' :
			printf("its monday");
			break;
		case '2' :
			printf("its tuesday");
			break;
		case '3' :
			printf("its wednesday");
			break;
		case '4' :
			printf("its thursday");
			break;
		case '5' :
			printf("its friday");
			break;
		case '6' :
			printf("its saturday");
			break;
		case '7' :
			printf("its sunday");
			break;
		default :
		printf("invalid day");
		break;	
	}
	getch();
}
