#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LEN 640
void array_init(int arr[],int size);
void select_sort(int array[],int size);
void array_display(int arr[],int size);
int main()
{
	int array[LEN];
	array_init(array,LEN);
	//for(i=0;i<10;i++)
	//printf("array[%d]=%d\n",i,array[i]);
	select_sort(array,LEN);
	printf("xuanzepaixu\n");
	array_display(array,LEN);



	return 0;
}
void array_init(int arr[],int size)
{
	srand(time(0));
	int i;
	for(i=0;i<size;i++)
		arr[i]=random()%1000;

}
void select_sort(int array[],int size)
{
	int max,temp,index,step,i;
	for(step=size;step>0;step--)
	{
		max=array[0];
		index=0;
		for(i=1;i<step;i++)
		{
			if(array[i]>max)
			{
				max=array[i];
				index=i;
			}
		

		}	
		temp=array[step-1];
		array[step-1]=array[index];
		array[index]=temp;
	}


}
void array_display(int arr[],int size)
{
	int i;
		for(i=0;i<size;i++)
			printf("arr[%d]=%d\n",i,arr[i]);

}







