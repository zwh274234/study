#include <stdio.h>

int expr(int num1 , int num2);
void exp();

int quanju = 40000;



int main()
{
	int a = 30;
	int b = 40;
/*
	int sum = expr(a,b);
	expr(a,b);
	exp();	//21
	exp();	//21
	exp();	//21
	int i = 0;
	for(i = 0 ; i < 5 ; i++)
	{
		int c = 20;
		c++;
		printf("%d\n",c);  //21
	}
	printf("%d\n",c);
*/

	printf("%d\n",quanju);
	exp();
	return 0;
}

void exp()
{
	int a = 20;
	a++;
	printf("%d\n",a);
	int quanju = 30;
	printf("%d\n",quanju);
}

int expr(int num1 , int num2)
{
	int sum = num1 + num2;
	return sum;
}



