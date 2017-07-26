#include <stdio.h>

void mygets(char * str, int size);

int main()
{
	char name[20] = {'\0'};
	mygets(name , 20);
	printf("%s\n",name);
	return 0;
}
void mygets(char * str, int size)
{
	int i = 0;
	for(i = 0 ; i < size - 1; i++)
	{
		str[i] = getchar();
		if(str[i] == '\n')
		{
			break;
		}
	}
	str[i] = '\0';
	if(i == size - 1)
	{
		while(getchar() != '\n');
	}
}





