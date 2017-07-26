#include "link_list.h"
#include <stdlib.h>

// 创建空的带头结点的单链表
link_list_t create_empty_link_list(void)
{
	// 为头结点分配空间
	link_list_t l = (link_list_t)malloc(sizeof(link_node_t));

	// 进行空的单链表的初始化
	l->next = NULL;

	// 返回头指针
	return l;
}

// 判断单链表是否为空，为空，返回1；否则，0
int is_link_list_empty(link_list_t l)
{
	// 判断头结点的指针域是否为NULL
	return l->next == NULL;
}

// 销毁单链表
void destroy_link_list(link_list_t l)
{
}
