#include<iostream>
#include<string.h>
using namespace std;
void get_next(char *s,int *next);
int Index_KMP(char *S,char*T,int pos);
int main(){
    char  S[30];
    char  T[30];
    cout<<"ÊäÈëS"<<endl;
    scanf("%s",S+1);
    S[0]=strlen(S)-1;
    cout<<"ÊäÈëT"<<endl;
    scanf("%s",T+1);
    T[0]=strlen(T)-1;
    int index=Index_KMP(S,T,1);
    if(index==0)    cout<<"Æ¥ÅäÊ§°Ü"<<endl;
    else cout<<"Æ¥Åä³É¹¦£¬indexÎª"<<index<<endl;
}
void get_next(char *T,int *next){
    int i=1,j=0;
    next[1]=0;
    while(i<strlen(T)){
        if(j==0||T[i]==T[j]){
            i++,j++;
            next[i]=j;
        }
        else
        j=next[j];
    }
}
int Index_KMP(char *S,char*T,int pos){
    int i=pos,j=1;
    int next[100];
    get_next(T,next);
    while(i<=strlen(S)-1 && j<=strlen(T)-1){
        if(j==0 || S[i]==T[j]){
            i++;
            j++;
        }
        else j = next[j];
    }
    if(j>strlen(T)-1) return i-T[0];
    else return 0;
}