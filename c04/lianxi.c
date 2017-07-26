#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
		srand((unsigned)time(NULL));
		int index=0;
		index=rand(1%3)+1;

		printf("%d",index);

	return 0;
}
