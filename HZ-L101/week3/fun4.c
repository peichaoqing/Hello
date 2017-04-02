#include<stdio.h>
void dec(int num)
{
	int res;
	if(num==0)
		return;
	res=num%10;
	num/=10;
	dec(num);
	printf("%d\n",res);
}
int jiecheng(int num)
{
	int res;
	if(num==0||num==1)
		return 1;
	else
		res=num*jiecheng(num-1);
	return res;
}
int main()
{
	dec(12345);
	int j;
	j=jiecheng(5);
	printf("%d",j);
	return 0;
}

