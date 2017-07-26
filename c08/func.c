#include <stdio.h>

//function;
//printf
//strlen
//strcpy
//strcmp

// name
//	codes
//	


//	return mystrlen(needs)
//
//
void myprintf();
void myprint2(int age);	//age xingcan
						//xing shi can shu
void expr(int num1 , int num2);
int expr2(int num1 , int num2);

int main()
{
	//myprintf();
	//myprintf();
	//int a = 30;
	//myprint2(a);  //shi can

	int a = 30;
	int b = 40;
	expr(a,b);
	int c = 50;
	int d = 60;
	expr(c,d);
	int e = 40;
	int f = 50;
	int sum = expr2(e,f);
	printf("%d\n",sum);
	return 0;
}

int expr2(int num1 , int num2)
{
	int sum = num1 + num2;
	return sum;
}


void expr(int num1 ,  int num2)
{
	printf("sum:%d\n",num1+num2);
}









void myprint2(int age)
{
	printf("your age is:%d\n",age);
}

void myprintf()
{
	printf("hello\n");
	printf("welcome\n");
}
















