#ifndef  _SQLIST_H
#define _SQLIST_H
 
#include <stdio.h>
#include <stdlib.h>
#define N 1024 //方便修改大小
typedef char data; //方便书写
typedef struct sqlist
{
    data buf[N]; //操作的数据项
    int len;  //操作的长度
}sq_node,*sq_pnode;//方便修改
//创建
sq_pnode create_sqlist(); //struct sqlist* create_sqlist
//插入
int insert_sqlist(sq_pnode L,int pos,data s);
//判满
int full_sqlist(sq_pnode L);
//判空
int empty_sqlist(sq_pnode L);
//打印
int show_sqlist(sq_pnode L);
//根据下标删除
int delete1_sqlist(sq_pnode L,int pos);
//根据元素值删除
int delete_sqlist(sq_pnode L,data s);
//改
int change_sqlist(sq_pnode L,int pos,data s);
//根据元素值查找
int find_sqlist(sq_pnode L,data s);
//根据下标查找
int find1_sqlist(sq_pnode L,int pos);
//清空
int clear_sqlist(sq_pnode L);
//销毁
int destroy_sqlist(sq_pnode *L);
 
 
#endif // !1