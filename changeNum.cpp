#include<stdio.h>
typedef int Status;    //声明Status的类型为int
typedef int SElemType; //声明SElemType的类型为int
#include"SqStack.h"     //调用头文件
void creak(int N,int R)   // 数值转换过程
{ Sqstack S;
  Initstack(S);
int e;
  while(N)           //不固定循环次数用while
  {
    push(S,N%R); //求余得到的进制数入栈  
	N=N/R;
  }
  while(!emptystack(S)){// 将S内的全部弹出 
	  Pop(S,e);
       printf("%d",e);
}
}
int main()
{
 int N,R;
 printf("请输入你要转换的数");
 scanf("%d",&N);
 printf("请输入你要转换的进制");
	 scanf("%d",&R);
 creak(N,R);     
 return 0;
}

