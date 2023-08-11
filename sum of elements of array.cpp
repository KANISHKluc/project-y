#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[20];
	int n,i,sum;
	printf("enter the no. of elements of array");
	scanf("%d", &n);
	printf("enter  the values of array");
	for (i=0;i=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i=n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of the array is= %d",sum);
	getch();
}
