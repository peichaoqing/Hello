#include<stdio.h>
int main()
{
	char a[]="12345",*p;
	int s=0;
	for(p=a;*p!='\0';p++)
	{
		s=10*s+*p-'0';
	}
	printf("%d\n",s);
	return 0;
}
