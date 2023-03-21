#include "sqlist.h"
sq_pnode create_sqlist()//�������Ա�
{
    sq_pnode L=(sq_pnode)malloc(sizeof(sq_node));
    if(L==NULL)
    {
        printf("create is error\n");
        return NULL;
    }
    L->len=0;//��ʼ��ʱ�������ȳ�ʼ��Ϊ0
    return L;
}
int empty_sqlist (sq_pnode L)//�п�
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
int full_sqlist (sq_pnode L)//����
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
//����λ�ò�����Ӧ��Ԫ��
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
    for(int i=L->len-1;i>=pos;i--)//�Ӻ���ǰ������ֱ���ҵ�Ҫ����Ԫ�ص�λ��
    {
        L->buf[i+1]=L->buf[i];//����Ҫ����λ�ú����Ԫ�����������ƣ�
    }
    L->buf[pos]=s;//��ҪҪ�����Ԫ�ظ�����Ӧ��λ��
    L->len++;//����Ԫ�غ����Ա���Ҫ����һ��
    return 0;
}
int show_sqlist(sq_pnode L)//��ӡ
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
 
    for(int i=0;i<L->len;i++)//���ʼ���α������Ա�
    {
        printf("%c",L->buf[i]);//����Ӧλ�õ�ֵ��ӡ����
    }
    return 0;
}
int delete1_sqlist(sq_pnode L,int pos)//����λ��ɾ��Ԫ��
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
    for(int i=pos;i<L->len;i++)//��Ҫɾ��λ�ÿ�ʼ�������
    {
        L->buf[i]=L->buf[i+1];//��Ҫɾ��λ�õĺ����Ԫ��������ǰ��ֵ
    }
    L->len--;//ɾ��Ԫ�غ󳤶ȼ�1
    return 0;
}
int find_sqlist(sq_pnode L,data s)//����ֵ����Ԫ��λ��
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
    for(int i=0;i<L->len;i++)//��ͷ�������Ա�
    {
        if(L->buf[i]==s)//�����Ա�ÿ��λ�õ�Ԫ�������Ԫ�رȽ�
        {
            return i;//���Ԫ����ȣ��򷵻�Ԫ�ص���Ӧλ��
        }
    }
    return 0;
}
//֪��Ԫ�أ�ɾ�����Ա�����Ӧ��Ԫ��
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
    int j=find_sqlist(L,s);//��ͨ�����Һ����ҵ���ӦԪ�ص�λ��
    for(int i=j;i<=L->len;i++)//�Ӳ��ҵ���λ�ÿ�ʼ�������
    {
        L->buf[i]=L->buf[i+1];//��Ҫɾ��Ԫ�ص�λ�õĺ����Ԫ��������ǰ��ֵ
    }
    L->len--;//ɾ��Ԫ�غ󳤶ȼ�1
    return 0;
}
 
int change_sqlist(sq_pnode L,int pos,data s)//�ı��ض�λ�õ�ֵ
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
    for(int i=0;i<=pos;i++)//��ͷ���α�����ֱ��������Ҫ�ı�Ԫ�ص�λ��ʱ
    {
        if(i=pos)
        {
            L->buf[i]=s;//����Ԫ�ظ�ֵ����Ӧ��λ��
        }
    }
    return 0;
    
}
//����λ�ò���Ԫ��
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
    for(int i=0;i<L->len;i++)//��ͷ���α����������Ա�
    {
        if(i=pos)//����������鵽��λ����ͬʱ
        {
            printf("�±�Ϊ%d��ֵΪ��%c",i,L->buf[i]);//��ӡ����λ�ö�Ӧ��Ԫ��
            return 0;
        }
    }
    printf("û�и�λ��\n");
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