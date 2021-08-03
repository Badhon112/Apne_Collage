#include<bits/stdc++.h>
using namespace std;
void Fact(int n){
    int fact[100]={0};
    for(int i=2;i<=n;i++){
        fact[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(fact[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(fact[j]==j)
                  fact[j]==i;
            }
        }
    }
    while (n!=1)
    {
        cout<<fact[n]<<" ";
        n=n/fact[n];
    }
    
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    Fact(n);

}