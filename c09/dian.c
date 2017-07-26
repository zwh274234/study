#include <stdio.h>
#include <stdlib.h>// 随机数
#include <string.h>// strcpy strlen
#include <time.h>//system
#include <unistd.h>//
#define RANDTIMES 40
#define SLEEPTIME 450000
#define LINES 8
#define ROW 8
#define CLOUMN 15 
int main()
{
	FILE * fp = fopen("1711.txt","r");
	srand((unsigned)time(NULL));

	if(NULL == fp)
	{
		fp = fopen("1711.txt","r");
		if(NULL == fp){
			printf("打开文件失败\n");
			exit(-1);
		}
	}
	char name[20];
	int count = 0;
	char * names[50];
	while(EOF != fscanf(fp,"%s",name))
	{
		names[count] = (char *)malloc(20);
		strcpy(names[count],name);
		count++;
	}
	

	int i = 0;
	int j = 0;
	int next = count/LINES;
	int st = SLEEPTIME;

	for( i = 0 ; i < RANDTIMES ; i++)
	{
		system("clear");
		int r = ROW;
		int c = CLOUMN;
		int index = rand()%count;
		char pos[40];
		sprintf(pos,"tput cup %d %d",r,c);
		system(pos);
		for(j = 0 ; j < count ; j++)
		{
			if(j%next == 0 && j != 0)
			{
				r++;
				sprintf(pos,"tput cup %d %d",r,c);
				putchar('\n');
				system(pos);
			}
			if(j == index)
			{
				printf("\033[1;31;40m%s\033[0m\t",names[j]);
			}else{
				printf("%s\t",names[j]);
			}
		}
		r+=3;
		putchar('\n');
		sprintf(pos,"tput cup %d %d",r,c);
		//printf("\n\n\n");
		system(pos);
		printf("恭喜\033[1;31;40m%s\033[0m中奖了!!!\n",names[index]);
		usleep(st);
		st-=10000;

	}



	fclose(fp);

	return 0;
}
