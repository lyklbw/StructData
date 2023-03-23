#include<stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef  int SElemType;
typedef  int Status;
typedef struct    //定义一个栈
{
	SElemType *base; //栈顶
	SElemType *top;  //栈底
	int stacksize;   //栈的长度
}Sqstack;
Status Initstack(Sqstack &S)  //顺序栈的初始化
{
    S.base=new SElemType[MAXSIZE]; //栈的基地址
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
Status emptystack(Sqstack S)       //空栈
{
  if(S.top==S.base)
	  return 1;
  else return 0;
}
Status push(Sqstack &S,SElemType e)   //入栈
{
if(S.top-S.base==S.stacksize)  return ERROR;
*S.top++=e;
return OK;
}
Status Pop(Sqstack &S,SElemType &e)   //出站
{
if(S.top==S.base)
 return ERROR;
e=*--S.top;
return OK;
}
SElemType GetTop(Sqstack S,SElemType &e)   //取栈顶元素
{
if(S.top==S.base)
return ERROR;
e=*(S.top-1);
 return OK;
}

