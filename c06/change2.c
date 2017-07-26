//输入一组数据，并把其中的最大值和最小值交换
//
#include<stdio.h>
void myscanf(int *arr,int size);
void mychange(int *arr,int size);
int main()
{
		int arr[10]={0};
		myscanf(arr,10);//注意事项：习惯写法容易写成：myscanf(*arr,10);这是错误的
		mychange(arr,10);
	return 0;
}
void myscanf(int * arr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		while(getchar()!='\n');
	}
}
void mychange(int* arr,int size)
{
	int i=0;
	int max=arr[0];
	int min=arr[0];
    int	mi=0;
	int	mj=0;
	for(i=0;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			mi=i;
		}
		if(min>arr[i])
		{
			min=arr[i];
			mj=i;
		}
	}
	int t=arr[mi];
	arr[mi]=arr[mj];
	arr[mj]=t;
	for(i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
}
