#ifndef __LINK_LIST_H__
#define __LINK_LIST_H__

// 定义单链表中数据节点数据域的抽象数据类型
// 实现单链表时，尽量与其具体类型无关
typedef int datatype_t;

// 定义单链表数据节点类型
// link_node_t		数据节点类型的别名(struct link_node)
// link_list_t		数据节点的指针类型别名，主要用于标示头指针的类型，用于唯一标识一条单链表，等价于(struct link_node *)或者(link_node_t *)
typedef struct link_node
{
	// 数据域：存放数据部分
	datatype_t data;
	// 指针域：存放后一个数据节点的地址值
	struct link_node *next;
}link_node_t, *link_list_t;

// 创建一个空的带头结点的单链表
link_list_t create_empty_link_list(void);

// 判断单链表是否为空，为空，返回1；否则，0
int is_link_list_empty(link_list_t l);

// 销毁单链表
void destroy_link_lint(link_list_t l);

#endif
