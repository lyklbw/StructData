#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int num;//���
	int password;//����
	struct node* next;//ָ����
} Node;

//��������Ϊn�ĵ���ѭ������
Node* createCircle(int n) {
	Node *head = NULL;
	Node* prev = NULL;
	for (int i = 1; i <= n; i++) {
		Node* p = (Node*)malloc(sizeof(Node));
		p->num = i;
		printf("������%d�ŵ����룺", i);
		scanf("%d", &p->password);
		if (i == 1) head = p;//��һ���ڵ�
		else prev->next = p;//�����ڵ�
		prev = p;
	}
	prev->next = head;//���һ���ڵ�ָ��ͷ��㣬�γ�ѭ������
	return head;
}
int deleteNode(Node* &p,int m){
	for(int i=0;i<m-2;i++)
	p=p->next;
	Node *q=p->next;
	printf("%d�ų���\n", q->num);
	p->next=q->next;
	int key=q->password;
	free(q);
	return key;
}
int main() {
	int n, m;
	printf("������������n:");
	scanf("%d", &n);
	printf("�������ʼ��������m��");
	scanf("%d", &m);
	int j=0;
	Node* head = createCircle(n);
	while(head->next!=head){//�������н���������һʱ����ѭ��
	if (m == 1) for (int i = 1; i < n - j; i++) head =head->next;
		m=deleteNode(head,m);
		head=head->next;
		j++;
	}
		printf("%d�ų���", head->num);
	free(head);
		return 0;
}