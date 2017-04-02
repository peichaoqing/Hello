#include<stdio.h>
#include<string.h>
#define N 9
int main()
{
	char arr[N][N]={0};
	int i,j;
	for(i=0;i<N/2;i++)
	{
		for(j=i;j<N-i;j++)
		{
			arr[i][j]='*';	
		}
		
	}
	for(i=N/2;i<N;i++)
	{
		for(j=N-i-1;j<i+1;j++)
		{
			arr[i][j]='*';
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(arr[i][j]!='\0')
			{
				printf("%c",arr[i][j]);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}

