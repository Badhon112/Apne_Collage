#include<bits/stdc++.h>
int Exclusive(int x,int a,int b){
    int c1=x/a;
    int c2=x/b;
    int c3=x/(a*b);
    return c1+c1-c3;
}
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<Exclusive(n,a,b)<<endl;
    
    
}