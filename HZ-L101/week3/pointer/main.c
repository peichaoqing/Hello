#include"ptr.h"
int main(int argc,char *argv[])
{
	//pointer_test();
	//pointer_test2();
	//pointer_test4();
	//pointer_test5();
	//pointer_test7();
	//pointer_test8();
	//pointer_test9();
	//pointer_test11();
	printf("argc = %d\n",argc);
	printf("argv[0] = %s\n",argv[0]);
	int i =0;
	for(i=0;i<argc;i++)
		printf("argv[%d] = %s\n",i,argv[i]);
	return 0;
}
