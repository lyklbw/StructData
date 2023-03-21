#ifndef  _SQLIST_H
#define _SQLIST_H
 
#include <stdio.h>
#include <stdlib.h>
#define N 1024 //�����޸Ĵ�С
typedef char data; //������д
typedef struct sqlist
{
    data buf[N]; //������������
    int len;  //�����ĳ���
}sq_node,*sq_pnode;//�����޸�
//����
sq_pnode create_sqlist(); //struct sqlist* create_sqlist
//����
int insert_sqlist(sq_pnode L,int pos,data s);
//����
int full_sqlist(sq_pnode L);
//�п�
int empty_sqlist(sq_pnode L);
//��ӡ
int show_sqlist(sq_pnode L);
//�����±�ɾ��
int delete1_sqlist(sq_pnode L,int pos);
//����Ԫ��ֵɾ��
int delete_sqlist(sq_pnode L,data s);
//��
int change_sqlist(sq_pnode L,int pos,data s);
//����Ԫ��ֵ����
int find_sqlist(sq_pnode L,data s);
//�����±����
int find1_sqlist(sq_pnode L,int pos);
//���
int clear_sqlist(sq_pnode L);
//����
int destroy_sqlist(sq_pnode *L);
 
 
#endif // !1