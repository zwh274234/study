#include <stdio.h>

int main()
{
	/*
	int arr[5] = {4,2,7,9,3};
	int * p = arr;
	int i = 0;
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d\n",*(p + i));
	}
	//数组指针
	int a = 2;
	int b = 3;
	int c = 4;
	int * p1 = &a;
	int * p2 = &b;
	int * p3 = &c;
	
	int * parr[3] = {p1,p2,p3};

	for(i = 0 ; i < 3 ; i++)
	{
		printf("%d\n",**(parr + i));
	}
	*/
/*
	int a1[5] = {1,2,3,4,5};
	int a2[5] = {6,7,8,9,10};
	int a3[5] = {11,12,13,14,15};

	int * arr[3] = {a1,a2,a3};
	//二维数组
//	printf("%d\t%d\t%d\n",arr[0][2],*(*(arr + 1) + 3),*(arr[2] + 3));
	int i = 0;
	int j = 0;
	for(i = 0 ; i < 3 ; i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			printf("%d\t",arr[i][j]);
			//printf("%d\t",*(*(arr + i) + j));
		}
		putchar('\n');
	}

*/


	// arr[0] a1 *arr		 arr[0][2] (*arr)[2] *(*(arr + 0) + ) *(*(arr + 1) + 1)
	// arr[1] a2 *(arr + 1)
	// arr[2] a3 *(arr + 2)
	//指针数组，数组中全是指针的数组
	//
	//*(*(arr + 1) + 1)
	//数组指针
	// 一维数组指针
	// 加一，在数组中移动
	// 加 *,取出对应位置的内容

	//arr + 1 在不同的数组间移动，移动了一行
	//*(arr+1) 在一个数组中移动，移动了一列
	//arr 行指针
	//行指针加* 变成列指针
	//列指针加& 变行指针
	//printf("%d\t%d\t%d\n",*arr[0],*arr[1],*arr[2]);
	//printf("%d\n",*(*(arr + 1) + 2));
	//printf("%d\n",arr[1][2]);


	//1 100
	//2 80
	//3 59
	
	int a[3][2];
	int arr[行][列]
	// 每一行的列数相等
	//使用的时候，需要注意，也是使用下标，也是从0开始
	
	a[1][1];
	*(*(a + 1) + 1)
	a[0][0] = 1; a[0][1] = 100;
	a[1][0] = 2; a[1][1] = 80;
	//
	//
	//
	// int arr[2][3] = {{1},{4,5,6}};
	// int arr[2][3] = {1,4,5,6};
	// int arr[2][3] = {0};
	// int arr[][4] = {{1,2,3,4},{5,6,7,8}}
	// int map[200][200]
	// int map[][]
	int a1[5] = {1,2,3,4,5};
	int a2[5] = {6,7,8};
	int a3[5] = {11,12,13,14,15};

	int * arr[3] = {a1,a2,a3};


	//int id[3];
	//int socre[3];
	
	//二维数组
	//一维数组 1 2 3 4 5 6 
	// 1 2 3 4 5
	// 6 7 8 9 10
	// 11 12 13 14 145






	return 0;
}