#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void 1mymenu();
void 2gamemenu();
void 3registe(char * name,char *passwd);
void 4mygets(char * str,int size);
void 5login(char *name,char *passwd);
void 6attack(int * user,int *com,int flag);
void 7judge(int * arr);
int main()
{
	srand((unsigned)time(NULL));
	menu()
	return 0;
}
void 7judge(int * arr)
{
	int i=0;
	int sum =0;
	for(i =0 ;i<15;i++)
	{
		if(arr[i]==1)
				sum++;
	}
	printf("牺牲了：%d个士兵\n",sum);
}
void 6attack(int * user,int *com)
{
	int i=0;
	if(flag==0)//用户打电脑
	{
		for(i=0;i<3;i++)
		{
			int index=rand()%15;
			com[index]=1;
		}
	}else{//电脑打用户
		for(i<0;i<3;i++)
		{
			int index=rand()%15;
void menu()
{
	printf("1-->进攻\n"
			"2-->撤退\n"
			"请输入你的选择：");
	char ch='\';
	scanf("%c",&ch);













	switch(ch)
	{
		case '1':
				//注册功能
				break;
		case '2':
				//
	
	}

}
