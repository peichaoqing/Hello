#include<stdio.h>
void swap(int a,int b);
int main()
{
	int x,y;
	do{
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("addr:x=%p,y=%p\n",&x,&y);
	printf("%d,%d\n",x,y);
	printf("addr:x=%p,y=%p\n",&x,&y);
	}while(x!=0&&y!=0);

	return 0;


}

void swap(int a,int b)
{
	
	int c;
	printf("start!\n");
	c=a;
	a=b;
	b=c;
	static int cnt=0;
	cnt++;
	printf("cnt=%d\n",cnt);
	printf("%d,%d\n",a,b);
	printf("addr:a=%p,b=%p\n",&a,&b);
	printf("ending!\n");
	

}
