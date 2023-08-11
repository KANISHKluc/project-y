#include<conio.h>
#include<stdio.h>
int main()
{
	float m1,m2,m3,m4,m5,total,perc;
	clrscr();
	printf("enter your marks of three subjects= ");
	scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	perc=(total/600)*100;
	if(perc>=90)
	{
		printf("you are pass in merit %f",perc);
	}
	else if(perc<90 && perc>=75)
	{
		printf("you are pass with distinction %f",perc);
	}
	else if(perc<75 && perc>=60)
	{
		printf("you are pass in first class %f",perc);
	}
	else if(perc<60 && perc>=50)
	{
		printf("you are pass in second class %f",perc);
	}
	else if(perc<50 && perc>=35)
	{
    	printf("yo are in third class %d", perc);	
    }
    else 
    {
    	printf("you are fail, shame on you %d",perc);
	}
	 return 0;
}
