#include<stdio.h>
typedef int Status;    //����Status������Ϊint
typedef int SElemType; //����SElemType������Ϊint
#include"SqStack.h"     //����ͷ�ļ�
void creak(int N,int R)   // ��ֵת������
{ Sqstack S;
  Initstack(S);
int e;
  while(N)           //���̶�ѭ��������while
  {
    push(S,N%R); //����õ��Ľ�������ջ  
	N=N/R;
  }
  while(!emptystack(S)){// ��S�ڵ�ȫ������ 
	  Pop(S,e);
       printf("%d",e);
}
}
int main()
{
 int N,R;
 printf("��������Ҫת������");
 scanf("%d",&N);
 printf("��������Ҫת���Ľ���");
	 scanf("%d",&R);
 creak(N,R);     
 return 0;
}

