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
typedef struct {  //����һ��ջ
	SElemType *base; //ջ��
	SElemType *top;  //ջ��
	int stacksize;   //ջ�ĳ���
} Sqstack;
Status InitStack(Sqstack &S) { //˳��ջ�ĳ�ʼ��
	S.base=new SElemType[MAXSIZE]; //ջ�Ļ���ַ
	if(!S.base) exit(OVERFLOW);
	S.top=S.base;
	S.stacksize=MAXSIZE;
	return OK;
}
Status emptyStack(Sqstack S) {     //��ջ
	if(S.top==S.base)
		return OK;//�շ���1 
	else return 0;
}
Status Push(Sqstack &S,SElemType e) { //��ջ
	if(S.top-S.base==S.stacksize)  return ERROR;
	*S.top++=e;
	return OK;
}
Status Pop(Sqstack &S,SElemType &e) { //��վ
	if(S.top==S.base)
		return ERROR;
	e=*--S.top;
	return OK;
}
Status BraketMatch(char*arr,int length) {
	Sqstack S;
	InitStack(S);
	for(int i=0; i<length; i++) {
		if(arr[i]=='('||arr[i]!='['||arr[i]!='{'||arr[i]==')'||arr[i]!=']'||arr[i]!='}') continue;//�����ڴ�����ѧʽ����
		if(arr[i]=='('||arr[i]=='['||arr[i]=='{') {
			Push(S,arr[i]);//����������ջ
		} 
		else { 
			char topElem;
			//ջ��Ԫ�س�ջ
			if(emptyStack(S))
				return false;//�����������ҵ�ǰջ��,ƥ��ʧ��
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
	return result;//ȫ��ƥ�����,ջ����˵��ƥ��ɹ�
}

int main() {
//	"[]{[]}";
	char *arr ="(+{*[we]})";
	if(BraketMatch(arr,strlen(arr)))
		printf("ƥ��ɹ���");
	else
		printf("ƥ��ʧ�ܣ�");
}
