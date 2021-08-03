#include<bits/stdc++.h>
using namespace std;
int Pow(int n,int p){
    if(p==0){
        return 1;
    }
    int prev=Pow(n ,p-1);
    return n*prev;

}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<Pow(n, p)<<endl;
}