/*�Ա�д�㷨��һԪn�׶���ʽ��ֵ P(x)
��ֵ ����ȷ���㷨��ÿһ����ִ�д���
�������㷨��ʱ�临�Ӷȡ�ע��ѡ������Ϊ�Ϻõ������������������������Ϊ (i n) ai = 0,1,?, �� x0
�� n �����Ϊ ( ) x0*/
#include<iostream>
using namespace std;
double PolSum(int a[],int i,double x,int n){
    if(i>0) return a[n-i]+PolSum(a,i-1,x,n)*x;
    else return a[n];
}
int main(){
    cout<<"�������ʽ����n"<<endl;
    int n;//ȷ������
    cin>>n;
    int *arr=(int*)malloc(sizeof(int)*(n+1));
    cout<<"���볣����a[i]"<<endl;
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    double x;//ȷ��xֵ�Ĵ�С
    cout<<"����x��ֵ"<<endl;
    cin>>x;
    cout<<PolSum(arr,n,x,n);
}