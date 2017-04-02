#include<stdio.h>

//#define Debug 10
int main()
{

#if 0
	if(3<4)
	printf("yes\n");
	else
		printf("no\n");
#else
	printf("haha\n");
#endif
#ifdef Debug
	if(3<4)
	printf("yes\n");
	else
		printf("no\n");
#else
	printf("hhh\n");
#endif
}
