#include <stdio.h>
#include "sqlist.h"
int main()
{ 
    sq_pnode L=create_sqlist();
    insert_sqlist(L,0,'a');
    insert_sqlist(L,1,'b');
    insert_sqlist(L,2,'c');
    insert_sqlist(L,3,'d');
    insert_sqlist(L,4,'e');
    insert_sqlist(L,5,'f');
    insert_sqlist(L,6,'g');
    printf("������˳��:\n");
    show_sqlist(L);
    printf("\n");
 
    delete1_sqlist(L,2);
    printf("ɾ���±�Ϊ2�������\n");
    show_sqlist(L);
    printf("\n");
 
    printf("e��λ��%d\n",find_sqlist(L,'e'));
    printf("\n");
 
    change_sqlist(L,3,'h');
    printf("���±�Ϊ3��Ϊh�������:\n");
    show_sqlist(L);
    printf("\n");
 
    delete_sqlist(L,'h');
    printf("ɾ��h�������\n");
    show_sqlist(L);
    printf("\n");
 
    find1_sqlist(L,4);
    printf("\n");
 
  //  clear_sqlist(L);
 
    destroy_sqlist(&L);
    if(L==NULL)
    {
        printf("���ٳɹ�\n");
    }
    return 0;
} 