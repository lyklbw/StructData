#include<stdio.h>
#include<malloc.h> 
/*线性实现栈*/
#define MaxSize 100   // 堆栈元素的最大个数 
typedef int ElementType; // ElementType 暂时定义为 int 类型 
typedef struct SNode* Stack;
struct SNode{
	ElementType Data[MaxSize];   // 存储堆栈元素
	int Top;  // 记录栈顶元素下标 
}; 

Stack CreateStack();  // 初始化堆栈 
int IsFull(Stack S); // 判断堆栈是否已满 
int IsEmpty(Stack S);   // 判断堆栈是否为空 
void Push(Stack S,ElementType item);   // 入栈 
ElementType Pop(Stack S);   // 出栈 

// 初始化堆栈 
Stack CreateStack(){
	Stack S;
	S = (Stack)malloc(sizeof(struct SNode));
	S->Top = -1;
	return S;
} 

// 是否已满 
int IsFull(Stack S){
	return (S->Top == MaxSize-1);//满返回1,不满返回0
}

// 是否为空 
int IsEmpty(Stack S){
	return (S->Top == -1); //为空返回1
}  

// 入栈 
void Push(Stack S,ElementType item){
	if(IsFull(S)){   // Top 从 0 开始 
		printf("堆栈满");
		return;
	}else{
		S->Top++;   // 栈顶元素加一 
		S->Data[S->Top] = item;   // 放进最上 
		return;
	}
}

// 出栈
ElementType Pop(Stack S){
	if(IsEmpty(S)){
		printf("堆栈空");
	}
    else{
		ElementType val = S->Data[S->Top];  //取出最上 
		S->Top--;  // 栈顶元素减一 
		return val;//返回删除元素
	}
}
int main(){
	Stack S;
	S = CreateStack();
	printf("5入栈\n");
	Push(S,5);
	printf("7入栈\n");
	Push(S,7);
	printf("66入栈\n");
	Push(S,66);
	printf("%d出栈\n",Pop(S));
	printf("%d出栈\n",Pop(S));
	return 0;
}
