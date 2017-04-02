#include<stdio.h>
#include<stdlib.h>
#define N 4
int main()
{
	int i,j;
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		arr[i]=(arr[i]+5)%10;
	}
	int temp=0;
	for(j=0;j<N;j++)
	{
		temp=arr[i];
		arr[i]=arr[j-i];
		arr[j-i]=temp;
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
}
