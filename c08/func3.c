#include <stdio.h>

void exchange(int *num1 , int *num2);
int plus(int a , int b);

int main()
{
	int a = 3;
	int b = 9;
	exchange(&a,&b);
	printf("%d\t%d\n",a,b);
	
	int sum = plus(a,b);
	printf("sum:%d\n",sum);
	return 0;
}
int plus(int a , int b)
{
	int sum = a + b;
	return sum;
}



void exchange(int *num1 , int *num2){
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
	//printf("in func a:%d\t%d\n",num1 , num2);
}
