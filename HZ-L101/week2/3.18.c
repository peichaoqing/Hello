#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s1[64],s2[64],s3[64];
	int i,j,k,n;
	gets(s1);
	gets(s2);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s3[i]=s1[i];
	}
	for(j=0;s2[j]!='\0';j++)
	{
		s3[i+j]=s2[j];
	}
	for(k=n;s1[k]!='\0';k++)
	{
		s3[k+j]=s1[k];
	}
	s3[k+j]='\0';
	printf("%s\n",s3);
	return 0;
}
