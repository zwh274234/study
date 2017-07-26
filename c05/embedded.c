#include <stdio.h>

int main()
{
		int i=0;//行数
		int j=0;//空格
		int k=0;//*号
		for(i=0;i<4;i++)
		{
				for(j=3;j>i;j--)
				{
					printf(" ");
				}
			for(k=0;k<2*i+1;k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for(i=7;i>4;i--)
		{
			for(j=i;j<7+1;j++)
			{
			 		 printf(" ");
			}
			for(k=0;k<2*(i-4-1)+1;k++)
			{
					printf("*");
			}
			printf("\n");
		}


		
/*	int i = 0;
	int j = 0;
	for(i = 0 ; i < 10 ;i++)
	{
		for(j = 0 ; j < 5 ; j++)
		{
			printf("qwe\n");
		}
	}
	//50
	// *     	1  ,  1
	// **		2  ,  2
	// ***		3  ,  3
	// ****
	// *****
	// ******
	// *******
	//		*        1,1
	//	   ***       2,3
	//	  *****      3,5
	//	 *******     4,7       
	//	  *****      5,5
	//	   ***       6,3
	//		*        7,1
		for(i=1;i<7;i++)
		{
				for(j=1;j<i+1;j++)
				{
			 		
						printf("*");
				}
				printf("\n");
		}
		i=0;
		int k=0;
		while(i<7/2+1)
		{		
				for(j=7/2;j>0;j--)
						printf(" ");
				for(k=0;k<2*(7/2)-1;k++)
						printf("*");

			i++;
		}
		k=0;//*
		while(i=4)
		{
				for(k=0;k<7;k++)
						printf("*");
				i++;
		}
		j=0;//空格
		k=0;//*
		while(i>3&&i<7)
		{
				for(j=0;j<7/2;j++)
				{
				
					printf(" ");
				}
				for(k=7/2;k<2*(7/2)+1;k--)
				{
					printf("*");
				}
				i++	;
		}

//	int i = 0;
//	int j = 0;
//	for(i = 0 ; i < 7; i++)
//	{
//		for(j = 0; j < i + 1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
	//已知质数的规定，除了１和自身，都不能被整除
	// 100之内 所有的质数
	// 13
	

	


*/
	
	return 0;
}
