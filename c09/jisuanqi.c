#include<stdio.h>
#include<stdlib.h>
int main()
{
		float a=0,b=0,c=0;
		char ch='\0';
		printf("请直接输入您想要进行的四则运算");
		scanf("%f%c%f",&a,&ch,&b);
		getchar();
		switch(ch)
		{
				case '+':
						c=a+b;
						printf("%f",c);
						break;
				case '-':
						c=a-b;
						printf("%f",c);
						break;
				case '*':
						c=a*b;
						printf("%f",c);
						break;
				case '/':
						if(0==b)
						{
							printf("b is impossible 0");
							exit(-1);
						}
						else 
						{
								c=a/b;
								printf("%f",c);
						}
		
						break;
				default:
						printf("the input char is worng!");
		}
		return 0;
}
