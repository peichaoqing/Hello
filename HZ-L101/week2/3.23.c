#include<stdio.h>
int main()
{
	int arr[10]={0,12,17,20,25,28,30};
	int i=6,j=7,index;
	scanf("%d",&index);
#if 1
	while(arr[i]>index)
	{
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=index;
	j++;
#if 0
	for(i=j;arr[i]!='\0';i++)
	{
		arr[i]=arr[i+1];
	}
	printf("%d\n",arr[j-2]);
#endif
#endif

	//arr[i]='\0';
	for(i=0;i<j;i++)
		printf("%4d",arr[i]);
	return 0;
}
