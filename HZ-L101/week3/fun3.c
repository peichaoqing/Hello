#include<stdio.h>
void array_disp(int array[],int len)
{
	if(len<=0)
		return;
	else if(len==1)
	{
		printf("%3d",array[len-1]);
		return;
	}
	else
	{
		array_disp(array,len-1);
		printf("%3d",array[len-1]);
	}
}
int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	array_disp(array,10);
	return 0;
}
