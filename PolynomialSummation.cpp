/*试编写算法求一元n阶多项式的值 P(x)
的值 ，并确定算法中每一语句的执行次数
和整个算法的时间复杂度。注意选择你认为较好的输入和输出方法。本题的输入为 (i n) ai = 0,1,?, ， x0
和 n ，输出为 ( ) x0*/
#include<iostream>
using namespace std;
double PolSum(int a[],int i,double x,int n){
    if(i>0) return a[n-i]+PolSum(a,i-1,x,n)*x;
    else return a[n];
}
int main(){
    cout<<"输入多项式阶数n"<<endl;
    int n;//确定阶数
    cin>>n;
    int *arr=(int*)malloc(sizeof(int)*(n+1));
    cout<<"输入常数项a[i]"<<endl;
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    double x;//确定x值的大小
    cout<<"输入x的值"<<endl;
    cin>>x;
    cout<<PolSum(arr,n,x,n);
}