#include<iostream>
#include<stdlib.h>
#include<string.h> 
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100

using namespace std;
typedef  char SElemType;
typedef  int Status;
typedef struct {  //定义一个栈
	SElemType *base; //栈顶
	SElemType *top;  //栈底
	int stacksize;   //栈的长度
} Sqstack;
Status InitStack(Sqstack &S) { //顺序栈的初始化
	S.base=new SElemType[MAXSIZE]; //栈的基地址
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
Status emptyStack(Sqstack S) {     //空栈
	if(S.top==S.base)
		return OK;//空返回1 
	else return 0;
}
Status Push(Sqstack &S,SElemType e) { //入栈
	if(S.top-S.base==S.stacksize)  return ERROR;
	*S.top++=e;
	return OK;
}
Status Pop(Sqstack &S,SElemType &e) { //出站
	if(S.top==S.base)
		return ERROR;
	e=*--S.top;
	return OK;
}
Status BraketMatch(char*arr,int length) {
	Sqstack S;
	InitStack(S);
	for(int i=0; i<length; i++) {
		if(arr[i]=='('||arr[i]!='['||arr[i]!='{'||arr[i]==')'||arr[i]!=']'||arr[i]!='}') continue;//可以在处理数学式子了
		if(arr[i]=='('||arr[i]=='['||arr[i]=='{') {
			Push(S,arr[i]);//左括号则入栈
		} 
		else { 
			char topElem;
			//栈顶元素出栈
			if(emptyStack(S))
				return false;//遇到右括号且当前栈空,匹配失败
				Pop(S,topElem);			
			if(arr[i]==')'){
				if(topElem!='(')
				return false;
			}
			if(arr[i]==']'){
				if(topElem!='[')
				return false;
			}
			if(arr[i]=='}'){
				if(topElem!='{')
				return false;
			}
		}
}
	int result=emptyStack(S);
 	delete S.base;
	return result;//全部匹配完后,栈空则说明匹配成功
}

int main() {
//	"[]{[]}";
	char *arr ="(+{*[we]})";
	if(BraketMatch(arr,strlen(arr)))
		printf("匹配成功！");
	else
		printf("匹配失败！");
}
