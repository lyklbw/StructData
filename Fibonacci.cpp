/*已知 k 阶斐波那契序列的定义为
f 0 = 0 ， f 1 = 0 ，…， f
k?2 = 0 ， f
k ?1 = 1；
f n = f n?1 + f n?2 +?+ f n?k ， n = k, k +1,?
试编写求 k 阶斐波那契序列的第 m 项值的函数算法，k 和 m 均以值调用的形式在函数参数表中出现。
解：k>0 为阶数，n 为数列的第 n 项*/
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