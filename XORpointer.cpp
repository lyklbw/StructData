/*�������㷨��������������ָ��Ķ�Ԫ���㡰��򡱣��� a �� b Ϊָ�룬�� a��b ����������Ϊԭָ
�����ͣ���
a��(a��b)=(a��a)��b=b
(a��b)��b=a��(b��b)=a
�������һ��ָ������ʵ��˫������ L������ L �е�ÿ�����ֻ��������data ��� LRPtr ��
���� LRPtr ���Ÿý������������ڽ��ָ�루������ʱΪ NULL�����������ָ�� L.Left ָ�������е������
�㣬L.Right ָ�������е����ҽ�㣬���ʵ�ִ������һ�������������˫������Ĳ�������дһ�㷨
����һ����������������и�Ԫ�ص�ֵ��
���� 2.34 �������Ĵ洢�ṹ��д���ڵ� i �����֮ǰ����һ�������㷨��*/


/*����
right==left^p->LRPtr  left==right^p->LRPtr ������ô�����أ�
*/
/*#include<iostream>
using namespace std;
typedef struct XorNode{
    char data;
    XorNode LRPtr;
}XorNode,*XorPointer;

typedef struct {//��ͷ�������ָ��˫������
    XorPointer  Left, Right;//�ֱ�ָ���������˺��Ҷ�
} XorLinkedList;
XorPointer XorP(XorPointer  p,XorPointer  q);//ָ�������XorP����ָ��p��q������ֵ

void TraversingLinkList(XorLinkedList &L,char d)
{
   XorPointer p,left,right;
   if(d=='l'||d=='L')//ѡ���������Ϊ������
   {
      p=L.left;//pָ�����������
      left=null;
      while(p!=null)
      {
         visitingData(p->data);
          left=p;
          p=XorP(left,p->LRPtr);//�õ���һ�����ָ��
       }
   }
  else
     if(d=='R'||d=='r')
      {
         p=L.right;//ָ�����Ҳ�
         right=null;
         while(p!=null)
         {
           visitingData(p->data);
           right=p;
           p=XorP(p->LRPtr, right);//ָ�������ƶ�
         }
      }
}
*/