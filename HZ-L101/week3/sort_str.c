#include<stdio.h>
#define LEN 64
int mystrlen(char str[]);
void mystrcat(char str1[],char str2[]);
int mystrcmp(char str1[],char str2[]);
void mystrcpy(char dst[],char src[]);

int main()
{
	char str1[LEN],str2[LEN];
	//gets(str1);
	//gets(str2);
	scanf("%s %s",&str1,&str2);
#if 1
	int str_len1=0;
	int str_len2=0;
	str_len1=mystrlen(str1);
	str_len2=mystrlen(str2);
	printf("%d,%d\n",str_len1,str_len2);
	mystrcat(str1,str2);
	puts(str1);
#endif
#if 0
	int c;
	c=mystrcmp(str1,str2);
	printf("c=%d\n",c);
	if(c>0)
		printf("str1>str2\n");
	else if(c<0)
		printf("str1<str2\n");
	else if(c==0)
		("yiyang\n");
#endif
#if 1
	mystrcpy(str1,str2);
	puts(str1);
#endif
	return 0;
	
}
#if 1
int mystrlen(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
#endif
#if 1
void mystrcat(char str1[],char str2[])
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{		
	
			str1[i++]=str2[j++];
	}
	str1[i]='\0';

}
#endif
#if 1
int mystrcmp(char str1[],char str2[])
{
	int i=0;
	while(1)
	{
		if(str1[i]>str2[i])
		{
			return 1;
		}
		else if(str1[i]<str2[i])
		{
			return -1;
		}
		else if(str1[i]==str2[i])
		{
			if(str1[i]='\0')
			{	return 0;}
			i++;
		}
	}

}
#endif
# if 1
void mystrcpy(char dst[],char src[])
{
	int i=0;
	while(src[i]!='\0')
	{
		dst[i]=src[i];
		i++;
	}
	src[i-1]='\0';
}
#endif
