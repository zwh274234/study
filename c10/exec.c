// 使用结构体数组模拟一个简单的学生成绩管理系统
// 功能：
// 1.打印菜单
// 2.新增学生信息
// 3.删除学生信息
// 4.修改学生信息
// 5.查询学生信息
// 6.打印所有学生信息
// 7.退出

// 学生信息的存储：结构体数组
// 学生信息的唯一识别标识：id

#include <stdio.h>
#include <stdlib.h>

#define MAX_STU_COUNT 100
#define MAX_NAME_LEN 50

// 定义学生信息结构体并定义别名
typedef struct student
{
int  id;
	char name[MAX_NAME_LEN];
	int score;
}student_t;

// 定义一个全局数组存放所有的学生信息
student_t stus[MAX_STU_COUNT];

// 定义全局变量用于保存当前数组中的有效学生数目
int count = 0;

void print_menu();
void add_student();
void del_student();
void update_student();
void query_student();
void print_stu_info();
void do_exit();

int main(int argc, char *argv[])
{
	int select_no = 0;

	while(1)
	{
		// 1.打印菜单
		print_menu();

		// 2.读入选择
		printf("input no : ");
		scanf("%d", &select_no);

		// 3.根据读入的选择执行相应的动能
		switch(select_no)
		{
			case 1:
				add_student();
				break;
			case 2:
				del_student();
				break;
			case 3:
				update_student();
				break;
			case 4:
				query_student();
				break;
			case 5:
				print_stu_info();
				break;
			case 0:
				do_exit();
				break;
			default:
				break;

		}
	}

	return 0;
}

void print_menu()
{
	printf("welcome to use SQ student manager system\n");
	printf("1.add student\n");
	printf("2.del student\n");
	printf("3.update student\n");
	printf("4.query student\n");
	printf("5.print student info\n");
	printf("0.exit\n");
}

void add_student()
{
	// 1.判断有效数据是否满
	if(count == MAX_STU_COUNT)
	{
		printf("空间已满!!!\n");
		return;
	}

	// 2.读入学生信息
	student_t stu;
	printf("id : ");
	scanf("%d", &stu.id);
	printf("name : ");
	scanf("%s", stu.name);
	printf("score : ");
	scanf("%d", &stu.score);

	// 3.将读入的学生信息保存到数组中
	stus[count] = stu;

	// 4.更新有效数据的个数
	count++;
}

void del_student()
{
	// 1.判断有效数据是否为空
		if(0==MAX_STU_COUNT)
		{
			printf("无可删除数据！！！\n");
			return;
		}

	// 2.输入待删除的学生id
		int id = 0;
		printf("请输入待删除学生的id：");
		scanf("%d",&id);

	// 3.查找待删除数据的位置(下标)
		int i;
		int index;
		for(i=0;i<count;i++)
		{
			if(stus[i].id==id){
				index = i;
				break;
			}
		}
	// 4.删除该下标的数据
		for(i=index;i<count-1;i++)
		{
			stus[i]=stus[i+1];
		}
	// 5.更新有效数据个数
		--count;
}

void update_student()
{
	// 1.判断有效数据是否为空
		if(0==MAX_STU_COUNT)
		{
			printf("没有数据可以更新");
			return;
		}

	// 2.输入待更新的学生id
		int id = 0;
		printf("请输入待更新学生的id");
		scanf("%d",&id);

	// 3.查找该id在数组中的位置
		int i=0;
		int index=0;
		for(i=0;i<count;i++)
		{
			if(stus[i].id==id){
				index=i;
				break;
			}
		}

	// 4.更新该位置的数据(除id之外)
		printf("请输入最新的成绩：");
		scanf("%d",&stus[index].score);
}

void query_student()
{
	// 1.判断有效数据是否为空
		if(0==MAX_STU_COUNT)
		{
			printf("没有数据可以查询");
			return;
		}

	// 2.输入待查询的学生id
		int id=0;
		printf("请输入待查寻的学生id：");
		scanf("%d",&id);
	// 3.查找该id在数组中的位置
		int i = 0;
		int index=0;
		for(i=0;i<count;i++)
		{
			if(stus[i].id==id)
			{
				int index=i;
				break;
			}
		}

	// 4.打印输出该学生结构体
		printf("该学生信息为:\n学号：%d\n姓名：%s\n成绩：%d\n"
						,stus[index].id
						,stus[index].name
						,stus[index].score);
}

void print_stu_info()
{
	if(count == 0)
	{
		printf("无有效学生信息\n");
		return ;
	}
	
	printf("id\tname\tscore\n");
	int i = 0;

	for(i = 0; i < count; i++)
	{
		printf("%d\t%s\t%d\n",
				stus[i].id,
				stus[i].name,
				stus[i].score);
	}
}

void do_exit()
{
	// 资源释放操作

	printf("bye!!!\n");
	exit(0);
}
