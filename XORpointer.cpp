/*假设在算法描述语言中引入指针的二元运算“异或”，若 a 和 b 为指针，则 a⊕b 的运算结果仍为原指
针类型，且
a⊕(a⊕b)=(a⊕a)⊕b=b
(a⊕b)⊕b=a⊕(b⊕b)=a
则可利用一个指针域来实现双向链表 L。链表 L 中的每个结点只含两个域：data 域和 LRPtr 域，
其中 LRPtr 域存放该结点的左邻与右邻结点指针（不存在时为 NULL）的异或。若设指针 L.Left 指向链表中的最左结
点，L.Right 指向链表中的最右结点，则可实现从左向右或从右向左遍历此双向链表的操作。试写一算法
按任一方向依次输出链表中各元素的值。
采用 2.34 题所述的存储结构，写出在第 i 个结点之前插入一个结点的算法。*/


/*分析
right==left^p->LRPtr  left==right^p->LRPtr 这是怎么来的呢？
*/
/*#include<iostream>
using namespace std;
typedef struct XorNode{
    char data;
    XorNode LRPtr;
}XorNode,*XorPointer;

typedef struct {//无头结点的异或指针双向链表
    XorPointer  Left, Right;//分别指向链表的左端和右端
} XorLinkedList;
XorPointer XorP(XorPointer  p,XorPointer  q);//指针异或函数XorP返回指针p和q的异或的值

void TraversingLinkList(XorLinkedList &L,char d)
{
   XorPointer p,left,right;
   if(d=='l'||d=='L')//选择遍历方向为从左到右
   {
      p=L.left;//p指向链表的最左
      left=null;
      while(p!=null)
      {
         visitingData(p->data);
          left=p;
          p=XorP(left,p->LRPtr);//得到下一个结点指针
       }
   }
  else
     if(d=='R'||d=='r')
      {
         p=L.right;//指向最右侧
         right=null;
         while(p!=null)
         {
           visitingData(p->data);
           right=p;
           p=XorP(p->LRPtr, right);//指针向左移动
         }
      }
}
*/