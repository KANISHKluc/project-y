#include<conio.h>
#include<stdio.h>
int main()
{
	int num;
	printf("the even and odd no. from 1-10 are");
	for (num=1;num<10;num++)
	{
		if (num%2==0)
		{
			printf("the no is even=%d/n",num);
		}
		else 
		{
			printf("the no. is odd=%d/n",num);
		}
	}
	return 0;	
}
