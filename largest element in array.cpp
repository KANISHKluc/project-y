#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[20];
	int n,i,large=0;
	printf("enter the total no. of array");
	scanf("%d", &n);
	printf("enter the elemrents of array");
	for (i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	large=arr[0];
	for (i=1;i<n;i++)
	{
		if (large<arr[i])
		{
			large=arr[i];
		}
	}
	printf("the largest element in the array is= %d", large);
	getch();
}
