#include<stdio.h>
#include<math.h>
int main()
{
#if 0
	int i,n,g,s,b,q,w;
	for(n=10000;n<100000;n++)
	{
		w=n/10000;
		q=(n-w*10000)/1000;
		b=(n-w*10000-q*1000)/100;
		s=(n-w*10000-q*1000-b*100)/10;
		g=n%10;
	    if(w*w*w*w*w*w+q*q*q*q*q+b*b*b*b*b+s*s*s*s*s+g*g*g*g*g==n)
		printf("%d\n",n);
	}
#endif
	int  num,temp,base,i,sum;
	double cnt,res;
	for(num=1;num<100000;num++)
	{
		temp=num;
		cnt=0;
		while(temp!=0)
		{
			cnt++;
			temp/=10;
		}
		temp=num;
		base=1;
		i=cnt;
		while(i>1)
		{
			base*=10;
			i--;
		}
		sum=0;
		while(base!=0)
		{
			res=temp/base;
			sum+=pow(res,cnt);
			temp=temp%base;
			base/=10;
		}
		if(sum==num)
			printf("%d\n",sum);
		//else
			//printf("no\n");
	}
















	


	printf("a\n");
	return 0;
}
