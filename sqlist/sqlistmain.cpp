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
    printf("插入后的顺序:\n");
    show_sqlist(L);
    printf("\n");
 
    delete1_sqlist(L,2);
    printf("删除下标为2后的排序：\n");
    show_sqlist(L);
    printf("\n");
 
    printf("e的位置%d\n",find_sqlist(L,'e'));
    printf("\n");
 
    change_sqlist(L,3,'h');
    printf("将下标为3改为h后的排序:\n");
    show_sqlist(L);
    printf("\n");
 
    delete_sqlist(L,'h');
    printf("删除h后的排序：\n");
    show_sqlist(L);
    printf("\n");
 
    find1_sqlist(L,4);
    printf("\n");
 
  //  clear_sqlist(L);
 
    destroy_sqlist(&L);
    if(L==NULL)
    {
        printf("销毁成功\n");
    }
    return 0;
} 