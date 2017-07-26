#include <stdio.h>

void printfIntArray(int * arr,int size);
int checkHui(int * arr , int size);
// 

int main()
{
	//
	int arr[10] = {1,2,3,4,5,5,4,3,2,1};
	printfIntArray(arr,10);
	int re = checkHui(arr,10);
	if(re == 0)
	{
		printf("不是回文数\n");
	}else{
		printf("是回文数\n");
	}
	return 0;
}
int checkHui(int * arr , int size){
	int i = 0;
	for(i = 0 ; i < size/2 ; i++)
	{
		if(arr[i] != arr[size - i -1])
		{
			return 0;
		}
	}
	return 1;
}









void printfIntArray(int * arr, int size)
{
	int i = 0;
	for(i = 0 ; i < size ; i++)
	{
		printf("%d\n",arr[i]);
	}
}
