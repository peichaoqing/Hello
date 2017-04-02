#include<stdio.h>
int main()
{
#if 0
	int a,ge,shi,bai,qian,wang;
	scanf("%d",&a);
	ge=a%10;
	shi=(a/10)%10;
	bai=(a/100)%10;
	qian=(a/1000)%10;
	wang=(a/10000)%10;
	printf("%d %d %d %d %d",wang,qian,bai,shi,ge);
#endif
	int num;
	scanf("%d",&num);
	int base=10000;
	while(base!=0)
	{
		printf("%3d",num/base);
		num=num%base;
		base/=10;
	}
	return 0;
}
