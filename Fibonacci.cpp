/*��֪ k ��쳲��������еĶ���Ϊ
f 0 = 0 �� f 1 = 0 ������ f
k?2 = 0 �� f
k ?1 = 1��
f n = f n?1 + f n?2 +?+ f n?k �� n = k, k +1,?
�Ա�д�� k ��쳲��������еĵ� m ��ֵ�ĺ����㷨��k �� m ����ֵ���õ���ʽ�ں����������г��֡�
�⣺k>0 Ϊ������n Ϊ���еĵ� n ��*/
#include<iostream>
using namespace std;
int Fibonacci(int k,int m){
    int F=0;
    if(m<k)F=0;
    else if(m==k)F=1;
    else{
        for(int i=1;i<k+1;i++)
        F+=Fibonacci(k,m-i);
    }
    return F;
}
int main(){
    cout<<"Put in k and m"<<endl;
    int k,m;
    cin>>k;
    cin>>m;
    cout<<Fibonacci(k,m);
}