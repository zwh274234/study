//find： 统计一组元素中各种元素的个数。
//find2:统计一串字符串中各种元素的个数。

#include<stdio.h>
//void myprintf(int *arr,int size);
void myprintf(char *arr,int size);
//void myindex(int *arr,int size);
void myprintf(char *arr,int size);
int main()
{
	//	int arr[10]={0};
		char [100]={'\0'};
		myprintf(arr,10);
		myindex(arr,10);
	return 0;
}
void myprintf(int *arr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		while(getchar()!='\n');
	}
}
void myindex(int *arr,int size)
{
	int i=0;
	int index[10]={0};//10为统计元素种类的个数
	for(i=0;i<size;i++)
	{
		index[arr[i]]++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d:%d\t",i,index[i]);
	}
	printf("\n");
}

