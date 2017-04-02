#include"hanshu.h"

void  mysrand()
{
	 srand(time(0));
	int num = rand()%100;	   
	printf("%d\n",num);
}

void array_init(int array[],int len)
{
	int i=0;
	srand(time(0));
	for(i=0;i<len;i++)
	{
		array[i]=random()%100;
	}
}
void array_sort(int array[],int len)
{
	int i,j;
	int temp;
	for(j=0;j<len;j++)
	for(i=1;i<len-j;i++)
	{
		if(array[i-1]>array[i])
		{
			temp=array[i-1];
			array[i-1]=array[i];
			array[i]=temp;
		}
	}
}
void array_display(int array[],int len)
{
	int i;
	for(i=0;i<10;i++)
	{
	printf("%d\n",array[i]);
	}

}
void myarray()
{
	int i;
	int array[10];
	array_init(array,10);
	array_display(array,10);
	printf("\n");
	array_sort(array,10);
	array_display(array,10);

}

int panduan(char str)
{
	if(str>='A'&&str<='Z')
		return 1;
	else if(str>='a'&&str<='z')
		return 2;
	else if(str>='0'&&str<='9')
		return 3;
	else if(str==' ')
		return 0;
	else
		return 4;
}
void mystrpanduan()
{
	char str;
	str=getchar();
	int i;
	i=panduan(str);
	if(i==0)
		printf("kongge\n");
	else if(i==1)
		printf("daxie\n");
	else if(i==2)
		printf("xiaoxie\n");
	else if(i==3)
		printf("shuzi\n");
	else if(i==4)
		printf("qita\n");

}

void diguizhuanhuan(int num)
{
	int ret;
	if(num==0)
		return;
	ret=num%2;
	num/=2;
	diguizhuanhuan(num);
	printf("%d",ret);

}
void feidigui(int num)
{
	int i=0;
	int ch[10000];
	while(1)
	{
		if(num==0)
			break;
		else
		{
		ch[i]=num%2;
		num/=2;
		i++;
		}
	}
	int j;
	for(j=i-1;j>=0;j--)
	{
		printf("%d",ch[j]);
		
	}
	printf("\n");

		
}
void myjinzhi()
{
	int num;
	scanf("%d",&num);
	//diguizhuanhuan(num);
	feidigui(num);
}

void gongyueshu(int a,int b)
{
	int cnt=2;
	int min,max,res;
	min=a<b?a:b;
	max=a>b?a:b;
	while(1)
	{
		res=max%min;
		if(res==0)
		{
			printf("%d\n",min);
			break;
		}
		else
		{
			max=min;
			min=res;
		}
	}
}
void gongbeishu(int a,int b)
{
	int res=2;
	int beishu=1;
	while(1)
	{
		if(a%res!=0&&b%res!=0)
		{
			beishu = beishu*b*a;
			break;
		}
		else
		{
			if(a%res==0&&b%res==0)
			{
				beishu *=res;
				a /=res;
				b /=res;
			}
			else
			{
				res++;
			}
		}
	}
	printf("%d\n",beishu);
}
void my4_5()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	//gongyueshu(num1,num2);
	gongbeishu(num1,num2);

}

void jiaogu(int a)
{
	if(a==1)
	{
		printf("yes\n");
	}
	else
	{
		if(a%2==0)
		{
			jiaogu(a/2);
		}
		else
		{
			jiaogu(3*a+1);
	
		}
	}
}
void my4_6()
{
	int num;
	scanf("%d",&num);
	jiaogu(num);

}

void digui_dispy(int arr[],int len)
{

	if(len<=0)
		return;
	else if(len==1)
	{
		printf("%3d",arr[len-1]);
		return;
	}
	else
	{
		digui_dispy(arr,len-1);
		printf("%3d",arr[len-1]);

	}
}
void my4_7()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	digui_dispy(arr,10);
	printf("\n");
}

int jiecheng(int a)
{
	int jc=1;
   if(a==0||a==1)
   		return 1;
	else 
	{
		jc =a*jiecheng(a-1);
	}	
}

void my4_8()
{
	int num,j;
	scanf("%d",&num);
	j=jiecheng(num);
	printf("%d",j);
}

int mystrlen(char str[])
{
	int i=0,cnt=0;
	while(1)
	{
		if(str[i]!='\0')
		{
			cnt++;
			i++;
		}
		else
			break;
	}
	return cnt;
}
void mystrcat(char str[],char arr[])
{
	int i=0,j=0;
	while(1)
	{
		if(str[i]!='\0')
		{
			i++;
		}
		else
			break;
	}
	while(1)
	{
		if(arr[j]!='\0')
		{
			str[i]=arr[j];
			i++;
			j++;
		}
		else
			break;
	}
	str[i]='\0';
}

int mystrcmp(char str[],char arr[])
{
	int i=0;
	while(1)
	{
		if(str[i]>arr[i])
			return 1;
		else if(str[i]<arr[i])
			return -1;
		else if(str[i]==arr[i])
		{
			if(str[i]=='\0')
				return 0;
			else
				i++;
				continue;
		}
	}
}

void mystrcpy(char str[],char arr[])
{
	int i=0;
	while(1)
	{
		if(arr[i]!='\0')
		{
			str[i]=arr[i];
			i++;
		}
		else
			break;
	}
	str[i]='\0';
}
void my4_9()
{
	char str1[64]="hello";
	char str2[64]="world";
	int i,s;
	i=mystrlen(str1);
	printf("%d\n",i);
	s=mystrcmp(str1,str2);
	printf("%d\n",s);
	mystrcat(str1,str2);
	puts(str1);
	s=mystrcmp(str1,str2);
	printf("%d\n",s);
	mystrcpy(str1,str2);
	puts(str1);
	s=mystrcmp(str1,str2);
	printf("%d\n",s);

}

void str_cmp(char str[][64])
{
	char strstr[64];
	strcpy(strstr,str);
	int i;

	for(i=1;i<5;i++)
	{
		if(strlen(strstr)<strlen(str[i]))
		{
			strcpy(strstr,str[i]);
		}
		else
			continue;
	}
	puts(strstr);
}
void my4_10()
{
	char str[5][64];
	int i=0;
	for(i=0;i<5;i++)
	{
		gets(str[i]);
	}
	str_cmp(str);
#if 0
	for(i=0;i<5;i++)
	{
		puts(str[i]);
	}
#endif


}

void sort_arr(char str[],int len)
{
	int i,j,temp;
	for(i=0;i<len;i++)
	{
		for(j=1;j<len-i;j++)
		{
			temp=0;
			if(str[j-1]>str[j])
			{
				temp=str[j-1];
				str[j-1]=str[j];
				str[j]=temp;
			}
		}
	}
}

void my4_11()
{
	char str[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%c",&str[i]);
	}
	sort_arr(str,10);
	for(i=0;i<10;i++)
	{
		printf("%c\n",str[i]);
	}
}

void trans(int m,int base,char a[])
{
	int r,i=0;
	char *p=a;
	while(1)
	{
		if(m!=0)
		{
			r=m%base;
			if(r<10)
				*p=r+48;
			else
				*p=r+55;
			m=m/base;

			p++;
		}
		else
			break;
	}
	*p='\0';
}
void my4_12()
{
	int num;
	int radix,i=0;
	char n[64];
	scanf("%d",&num);
	scanf("%d",&radix);
	trans(num,radix,n);
#if 1
	while(1)
	{
		if(n[i]!='\0')
		{
			i++;
		}
		else
			break;
	}
	while(i>=0)
	{
		printf("%c",n[i-1]);
		i--;
		
	}
	printf("\n");
#endif
}
int cmp(const void *a,const void *b)
{
	return *(char *)a - *(char *)b;
}
void str_tongji(char str[],char ch[],int arr[])
{
	int i=0,j=0,z=0,c=0;
	int count=0;
	while(str[i]!='\0')
	{
		if(count==0)
		{
			ch[j++]=str[i++];
			count++;
		}
		else if(str[i]==ch[j-1])
		{
			i++;
			count++;
		}
		else
		{
		//	printf("%c have %d\n",ch[j-1],count);
			arr[z++]=count;
			//c=count;
			count=0;
		}
		
	}
		//printf("%c have %d\n",ch[j-1],count);
	arr[z]=count;
	ch[j]='\0';
}
void my4_13()
{
	int i=0;
	char str[64];
	char ch[64];
	int arr[64];
	gets(str);
	qsort(str,strlen(str),1,cmp);
	puts(str);
	str_tongji(str,ch,arr);
	puts(ch);
	while(ch[i]!='\0')
	{
		printf("%c have %d\n",ch[i],arr[i]);
		i++;
	}



}

void arr_nixun(int arr[],int len)
{
	int i,j=0,temp=0;
	for(i=len-1;i>len/2;i--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		j++;
	}
}
void my4_14()
{
	int arr[5];
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr_nixun(arr,5);
	for(i=0;i<5;i++)
		printf("%d",arr[i]);
	printf("\n");
}

void money(int x[],int y[],int z[],int m[])
{
	int x1,y1,z1,m1;
	int i=5,j=10,k=20,l=50,ch=0,sum=0,d=0;
	for(x1=1;x1<100;x1++)
	{
		for(y1=1;y1<50;y1++)
		{
			for(z1=1;z1<25;z1++)
			{
				for(m1=1;m1<10;m1++)
				{
					sum=x1*i+y1*j+z1*k+m1*l;
					if(sum==500)
					{
						x[d]=x1;
						y[d]=y1;
						z[d]=z1;
						m[d]=m1;
						printf("%d %d %d %d\n",x[d],y[d],z[d],m[d]);
						d++;
						ch++;
					}
				}

			}																		}
	}
	printf("%d\n",ch);
	
}
void my4_15()
{
	int x[10000],y[10000],z[10000],m[10000];
	money(x,y,z,m);
}

#if 0
void my4_16()
{
	int g,s,b,q,num;
	double sum;
	for(q=0;q<10;q++)
	{
		b=q;
		for(g=0;g<10;g++)
		{
			s=g;
		if(q==g)
			continue;
		else
		{
			sum =sqrt(q*1000+b*100+s*10+g);
		}
		if((int)sum==sum)
		{
			num = (q*1000+b*100+s*10+g);
			printf("%d\n",num);
			//break;
		}
		else
			continue;
		}
	}

}
#endif
void str_nixu(char str[])
{
	int i=0;
	int j=strlen(str)-1;
	char arr[64];
	while(str[i]!='\0')
	{
		arr[i]=str[i];
		i++;
	}
	i=0;
	while(str[i]!='\0')
	{
		str[i]=arr[j];
		i++;
		j--;
	}
}
void my4_18()
{
	char str[64];
	gets(str);
	str_nixu(str);
	puts(str);
}

void my_replace(char s[],char c1,char c2)
{
	int i;
	int len = strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]==c1)
			s[i]=c2;
		else
			continue;
	}
	s[i]='\0';
}

void my4_19()
{
	char s[64];
	char c1,c2;
	gets(s);
	c1=getchar();
	c2=getchar();
	puts(s);
	my_replace(s,c1,c2);
	puts(s);

}

void my_connect(char s1[],char s2[],char s[])
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		s[i]=s1[i];
		//printf("%c",s[i]);
		i++;
	}
	while(s2[j]!='\0')
	{
		s[i++]=s2[j++];
		//printf("%c",s[i]);
	}
	s[i]='\0';
}
void my4_20()
{
	char s1[64];
	char s2[64];
	char s[64];
	gets(s1);
	gets(s2);
	my_connect(s1,s2,s);
	puts(s);
}

















