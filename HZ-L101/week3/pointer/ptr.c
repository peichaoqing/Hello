#include"ptr.h"
void pointer_test()
{
	char *pch;
	int *pi;
	float *pf;
	printf("size: %d,%d,%d\n",sizeof(pch),sizeof(pi),sizeof(pf));
	printf("addr:%p,%p,%p\n",&pch,&pi,&pf);
	printf("value:%p,%p,%p\n",pch,pi,pf);
	char ch='A';
	int p=100;
	float f=2.2;
	pch = &ch;
	pi = &p;
	pf = &f;
	printf("%c,%d,%f\n",*pch,*pi,*pf);
	printf("%p,%p,%p\n",pch,pi,pf);
	printf("%p,%p,%p\n",&ch,&p,&f);
	

}
void pointer_test2()
{
	int *px;
	px = NULL;
	printf("%p\n",px);
	int t;
	int a=10;
	int b=20;
	int *pa=&a;
	int *pb=&b;
	printf("%d %d\n",*pa,*pb);
#if 0
	t=*pa;
	*pa=*pb;
	*pb=t;
	printf("%d %d\n",*pa,*pb);
	printf("%d %d\n",a,b);
#endif
#if 0
	int *pt;
	*pt=*pa;
	*pa=*pb;
	*pb=*pt;
	printf("%d %d\n",*pa,*pb);
#endif
#if 1
	int *pt;
	pt=pa;
	pa=pb;
	pb=pt;
	printf("%d %d\n",*pa,*pb);
	printf("%d %d\n",a,b);

#endif
}

int pointer_strlen(char arr[])
{
	char *p1=arr;
	int count=0;
	while(1)
	{
		if(*p1=='\0')
			break;
		else
		{
		++count;
		p1++;
		}
	}
	return count;
}
int pointer_strcmp(char arr1[],char arr2[])
{
	char *p1=arr1;
	char *p2=arr2;
	while(1)
	{
		if(*p1>*p2)
			return 1;
		else if(*p1<*p2)
			return -1;
		else 
		{
			if(*p1=='\0')
				return 0;
			else
			{
				p1++;
				p2++;
			}
		}
	}
}
void pointer_strcpy(char dst[],char src[])
{
	char *p1=dst;
	char *p2=src;
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}
void pointer_strcat(char str1[],char str2[])
{
	char *p1=str1;
	char *p2=str2;
	while(*p1!='\0')
		p1++;
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';
}

void pointer_test4()
{
	char arr1[]="hello";
	char arr2[]="world";
	puts(arr2);
	pointer_strcat(arr1,arr2);
	printf("%d\n",pointer_strlen(arr1));
	puts(arr2);
	puts(arr1);
	puts(arr2);
	pointer_strcpy(arr1,arr2);
	printf("%d\n",pointer_strlen(arr1));
	puts(arr1);
}

void array_init(int arr[],int num)
{
#if 0
	int *p;
	p=arr;
	int max,temp,index,step,i;
	for(step=num;step>0;step--)
	{
		max=*(p+0);
		index=0;
		for(i=1;i<step;i++)
		{
			if(*(p+i)>max)	
			{
				max=*(p+i);
				index=i;
			}																		}	
		temp=*(p+step-1);
		*(p+step-1)=*(p+index);
		*(p+index)=temp;
	}
#endif
#if 1
	int *p;
	p=arr;
	int i,j=0,k,max,temp;
	for(k=num;k>0;k--)
	{
		max=*(p+0);
		j=0;
		for(i=1;i<k;i++)
		{
			if(max<*(p+i))
			{	
				max=*(p+i);
				j=i;
			}

		}	

		temp=*(p+k-1);
		*(p+k-1)=*(p+j);
		*(p+j)=temp;
	}
#endif
}
void array_display(int arr[],int num)
{
	int i;
	int *p=arr;
	for(i=0;i<num;i++)
		printf("%2d",*(p+i));
	printf("\n");

}
void pointer_test5()
{

	int arr[9]={1,2,3,4,6,5,7,8,9};
	array_init(arr,LENGTH);
	int num = 3;
	move_data(arr,9,num);
	array_display(arr,LENGTH);
}
void move_data(int arr[],int len,int num)
{
	int *p;
	p=arr;
	int i=0,j;
	for(j=0;j<num;j++)
	{
		int temp=0;
		
		temp=*p;
	for(i=0;i<len-1;i++)
	{
		*(p+i)=*(p+i+1);
	}
	printf("%d\n",temp);
	*(p+i)=temp;
	}
#if 0
	for(i=0;i<len;i++)
	{
		printf("%2d",*(p+i));
	}
#endif
}

void pointer_test7()
{
	int array[10]={1,2,3,4,5};
	int brr[10]={10,9,8,7,6};
	int *pa;
	pa=array;

	printf("*pa:%d,*array:%d\n",*pa,*array);
	printf("pa:%p,array:%p\n",pa,array);
	printf("*(pa+2):%d,*(array+2):%d\n",*(pa+2),*(array+2));
	printf("pa[4]:%d,array[4]:%d\n",pa[4],array[4]);

	printf("size:pa:%d,array:%d\n",sizeof(pa),sizeof(array));
	
	pa++;
	printf("*pa:%d\n",*pa);
	//array++;
	//printf("*array:%d\n",*array);   error
	
	int y=10;
	y++;
	//const int x;   error  
	//x=10;
	//x++;

}

void pointer_test8()
{
	int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	printf("size:%d\n",sizeof(arr));
	printf("size:arr[0]:%d,arr[1];%d,arr[2]:%d\n",sizeof(arr[0]),sizeof(arr[1]),sizeof(arr[2]));
	printf("addr:%p\n",arr);
	printf("addr:arr[0]:%p,arr[1];%p,arr[2]:%p\n",arr[0],arr[1],arr[2]);
	
	printf("addr:arr+0:%p,arr+1:%p,arr+2:%p\n",arr+0,arr+1,arr+2);
}

void swapptr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void pointer_test9()
{
	int a=10,b=20;
	swapptr(&a,&b);
	printf("%d,%d\n",a,b);
}

char *retPointer()
{
	char arr[10]="hello";
	return arr;
}
char *retPointer1(char arr[])
{
	strcpy(arr,"hello");
	return arr;

}
char *retPointer2()
{
	char *str = (char *)malloc(10);
	strcpy(str,"hello");
}
void pointer_test11()
{
#if 0
	char *p;
	p=retPointer();
	puts(p);
#endif
#if 0
	char arr[10];
	char *p=retPointer1(arr);
	puts(p);
#endif
	char *p=retPointer2();
	puts(p);
	free(p);
}







