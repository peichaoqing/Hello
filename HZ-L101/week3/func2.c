#include<stdio.h>
#include"log.h"
int log_level =0;
int dec1(int num)
{
	int res;
	while(1)
	{
		if(num==0)
			break;
		res=num%2;
		printf("%d",res);
		num/=2;
	}
}
void dec2(int num)
{
	int res;
	if(num==0)
		return;
	res=num%2;
	num/=2;
	dec2(num);
	SPIDER_LOG(SPIDER_LEVEL_DEBUG,"res:%p,%d,num=%d\n",&res,res,num);
	printf("%d",res);
}
void dec8(int num)
{
	int res;
	if(num==0)
		return;
	res=num%8;
	num/=8;
	dec8(num);
	printf("%d",res);
}
int main()
{
	int num=10;
	dec2(num);
//	dec8(num);

	return 0;
}
