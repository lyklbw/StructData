#include<stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100
typedef  int SElemType;
typedef  int Status;
typedef struct    //����һ��ջ
{
	SElemType *base; //ջ��
	SElemType *top;  //ջ��
	int stacksize;   //ջ�ĳ���
}Sqstack;
Status Initstack(Sqstack &S)  //˳��ջ�ĳ�ʼ��
{
    S.base=new SElemType[MAXSIZE]; //ջ�Ļ���ַ
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
Status emptystack(Sqstack S)       //��ջ
{
  if(S.top==S.base)
	  return 1;
  else return 0;
}
Status push(Sqstack &S,SElemType e)   //��ջ
{
if(S.top-S.base==S.stacksize)  return ERROR;
*S.top++=e;
return OK;
}
Status Pop(Sqstack &S,SElemType &e)   //��վ
{
if(S.top==S.base)
 return ERROR;
e=*--S.top;
return OK;
}
SElemType GetTop(Sqstack S,SElemType &e)   //ȡջ��Ԫ��
{
if(S.top==S.base)
return ERROR;
e=*(S.top-1);
 return OK;
}

