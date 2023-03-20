/*2.21 试写一算法，实现顺序表的就地逆置，即利用原表的存储空间将线性表逆置为*/
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
    cout<<"输入数组长度（小于10）"<<endl;
    int n;
    cin>>n;
    Sqlist *L1;
    L1->length=n;
    cout<<"输入数据"<<endl;
    for(int i=0;i<n;i++){
        cin>>L1->data[i];
    }
    invertLinearTable(L1,n);
    for(int i=0;i<n;i++)
    printf("%-4d",L1->data[i]);
}