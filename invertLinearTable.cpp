/*2.21 ��дһ�㷨��ʵ��˳���ľ͵����ã�������ԭ��Ĵ洢�ռ佫���Ա�����Ϊ*/
#include<iostream>
using namespace std;
#define MAXSIZE 107
typedef struct{
    int data[MAXSIZE];
    int length;
}Sqlist;
void invertLinearTable(Sqlist*L,int length){
    int Head=0;
    int Rear=length-1;
   while(Head<Rear){
        int temp=L->data[Head];
        L->data[Head++]=L->data[Rear];
        L->data[Rear--]=temp;
  }
}
int main(){
    cout<<"�������鳤�ȣ�С��10��"<<endl;
    int n;
    cin>>n;
    Sqlist *L1;
    L1->length=n;
    cout<<"��������"<<endl;
    for(int i=0;i<n;i++){
        cin>>L1->data[i];
    }
    invertLinearTable(L1,n);
    for(int i=0;i<n;i++)
    printf("%-4d",L1->data[i]);
}