#include "sqlist.h"
sq_pnode create_sqlist()//创建线性表
{
    sq_pnode L=(sq_pnode)malloc(sizeof(sq_node));
    if(L==NULL)
    {
        printf("create is error\n");
        return NULL;
    }
    L->len=0;//初始化时，将长度初始化为0
    return L;
}
int empty_sqlist (sq_pnode L)//判空
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(L->len==0)
        return 1;
    else
        return -1;
}
int full_sqlist (sq_pnode L)//判满
{
    if(NULL==L)
    {
        printf("L is NULL");
        return 0;
    }
    if(L->len==N)
        return 1;
    else
        return -1;
}
//根据位置插入相应的元素
int insert_sqlist(sq_pnode L,int pos,data s)
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(full_sqlist(L)==1)
    {
        printf("hhh");
        return -1;
    }
    if(pos<0 || pos>N)
    {
        printf("jjjj");
        return -1;
    }
    for(int i=L->len-1;i>=pos;i--)//从后往前遍历，直到找到要插入元素的位置
    {
        L->buf[i+1]=L->buf[i];//将需要插入位置后面的元素依次往后移，
    }
    L->buf[pos]=s;//将要要插入的元素赋给相应的位置
    L->len++;//插入元素后，线性表长度要增加一个
    return 0;
}
int show_sqlist(sq_pnode L)//打印
{ 
    if(NULL == L)
    {
        printf("L  is NULL\n");
        return 0;
    }
    if(1 == empty_sqlist(L))
    {
        printf("L  is empty\n");
        return -1;
    }
 
    for(int i=0;i<L->len;i++)//从最开始依次遍历线性表
    {
        printf("%c",L->buf[i]);//将相应位置的值打印出来
    }
    return 0;
}
int delete1_sqlist(sq_pnode L,int pos)//根据位置删除元素
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    for(int i=pos;i<L->len;i++)//从要删除位置开始往后遍历
    {
        L->buf[i]=L->buf[i+1];//将要删除位置的后面的元素依次往前赋值
    }
    L->len--;//删除元素后长度减1
    return 0;
}
int find_sqlist(sq_pnode L,data s)//根据值查找元素位置
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    for(int i=0;i<L->len;i++)//从头遍历线性表
    {
        if(L->buf[i]==s)//把线性表每个位置的元素与查找元素比较
        {
            return i;//如果元素相等，则返回元素的相应位置
        }
    }
    return 0;
}
//知道元素，删除线性表中相应的元素
int delete_sqlist(sq_pnode L,data s)
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    int j=find_sqlist(L,s);//先通过查找函数找到对应元素的位置
    for(int i=j;i<=L->len;i++)//从查找到的位置开始往后遍历
    {
        L->buf[i]=L->buf[i+1];//将要删除元素的位置的后面的元素依次往前赋值
    }
    L->len--;//删除元素后长度减1
    return 0;
}
 
int change_sqlist(sq_pnode L,int pos,data s)//改变特定位置的值
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    for(int i=0;i<=pos;i++)//从头依次遍历，直到遍历到要改变元素的位置时
    {
        if(i=pos)
        {
            L->buf[i]=s;//将新元素赋值给相应的位置
        }
    }
    return 0;
    
}
//根据位置查找元素
int find1_sqlist(sq_pnode L,int pos)
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    for(int i=0;i<L->len;i++)//从头依次遍历整个线性表
    {
        if(i=pos)//当遍历到与查到的位置相同时
        {
            printf("下标为%d的值为：%c",i,L->buf[i]);//打印出该位置对应的元素
            return 0;
        }
    }
    printf("没有该位置\n");
    return 0;
}
int clear_sqlist(sq_pnode L)
{
    if(L==NULL)
    {
        printf("L is NULL");
        return 0;
    }
    if(empty_sqlist(L)==1)
    {
        printf("L is empty");
        return 0;
    }
    while(1)
    {
        delete1_sqlist(L,0);
        if(L->len==0)
        {
            printf("L is clearing\n");
            return 0;
        }
    } 
}
int destroy_sqlist(sq_pnode *L)
{
    if(*L==NULL)
        printf("L is NULL\n");
    free(*L);
    *L=NULL;
    return 0;
}