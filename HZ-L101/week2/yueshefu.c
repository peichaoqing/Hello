#include<stdio.h>
#define N 5
#if 0
int main()
{
	int K,M,i,j,count=1,n;
	
	int arr[N],arr2[N];
	n=N;
	scanf("%d%d",&K,&M);

	for(i=0;i<n;i++)
	{
		arr[i]=count++;
	}
	for(j=0;j<N;j++)
	{
		if(M>n)
		{
			M=M%n;	
		}
		if(arr[j!=0])
			
		arr2[j]=arr[K+M-1];
		arr[k+M-1]=0;
		n--;
		printf("%d\n",arr2[j]);
	}

}
#endif
int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int len=10,M,num=10,i;
	int K;
	int cnt=0;
	scanf("%d%d",&K,&M);
	for(i=K;;i++)
	{
		if(i==10)
			i=0;
		if(array[i]!=0)
			cnt++;
		else
			continue;
		if(cnt==M)
		{
			printf("%4d",array[i]);
			array[i]=0;
			cnt=0;
			num--;
			if(num==0)
				break;
		}
	}
	return 0;
}





