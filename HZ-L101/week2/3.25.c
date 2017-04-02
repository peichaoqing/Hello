#include<stdio.h>
int main()
{
	char  strstr[64],str[5][64];
	int i=0;
	for(i=0;i<5;i++)
	{
		gets(str[i]);
	}
	printf("\n");
	int p,j=0;
	for(i=0;i<5;i++)
	{
		p=i;
		strcpy(strstr,str[i]);
		for(j=i+1;j<5;j++)
		{
			if(strcmp(str[j],strstr)<0)
			{
				strcpy(strstr,str[j]);
				p=j;
			}
		}
		if(p!=i)
		{
		strcpy(strstr,str[i]);
		strcpy(str[i],str[p]);
		strcpy(str[p],strstr);
		}
		puts(str[i]);
	}
	printf("\n");
	return 0;
}
