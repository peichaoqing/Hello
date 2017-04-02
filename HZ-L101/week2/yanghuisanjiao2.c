#include <stdio.h>
#include <stdlib.h>
int main()
{
#if 0
    int s = 1, h;                   
    int i, j;                       
    scanf("%d", &h);               
    printf("1\n");                 
    for (i = 2; i <= h; s = 1, i++)        
    {
        printf("1 ");                
        for (j = 1; j <= i - 2; j++)
            //printf("%d ", (s = (i - j) / j * s));
            printf("%d ", (s = (i - j) * s / j));
        printf("1\n");              
    }
    getchar();
#endif
	int a[5][9]={0};
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=4;j>4-1-i;j--)
		a[i][j]=1;
		for(j=5;j<i+5;j++)
			a[i][j]=1;

	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[i][j]!='\0')
				printf("%2d",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
    return 0;
}
