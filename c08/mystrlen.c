#include <stdio.h>

//strlen , \0
//

int mystrlen(char * arr);

int main()
{
	char name[20] = {'\0'};
	scanf("%s",name);
	int size = mystrlen(name);
	printf("%d\n",size);
	return 0;
}

int mystrlen(char * arr){
	int i = 0 ;
//	sizeof(arr);
//	printf("%ld\n",sizeof(arr));
	while(1)
	{
		if(arr[i] != '\0')
		{
			i++;
		}else{
			break;
		}
	}
	return i;
}

// strcpy
// strcpy plus
// strncpy
//




