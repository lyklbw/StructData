#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int num;//编号
	int password;//密码
	struct node* next;//指针域
} Node;

//创建长度为n的单向循环链表
Node* createCircle(int n) {
	Node *head = NULL;
	Node* prev = NULL;
	for (int i = 1; i <= n; i++) {
		Node* p = (Node*)malloc(sizeof(Node));
		p->num = i;
		printf("请输入%d号的密码：", i);
		scanf("%d", &p->password);
		if (i == 1) head = p;//第一个节点
		else prev->next = p;//其他节点
		prev = p;
	}
	prev->next = head;//最后一个节点指向头结点，形成循环链表
	return head;
}
int deleteNode(Node* &p,int m){
	for(int i=0;i<m-2;i++)
	p=p->next;
	Node *q=p->next;
	printf("%d号出列\n", q->num);
	p->next=q->next;
	int key=q->password;
	free(q);
	return key;
}
int main() {
	int n, m;
	printf("请输入总人数n:");
	scanf("%d", &n);
	printf("请输入初始报数上限m：");
	scanf("%d", &m);
	int j=0;
	Node* head = createCircle(n);
	while(head->next!=head){//当链表中结点个数大于一时进入循环
	if (m == 1) for (int i = 1; i < n - j; i++) head =head->next;
		m=deleteNode(head,m);
		head=head->next;
		j++;
	}
		printf("%d号出列", head->num);
	free(head);
		return 0;
}