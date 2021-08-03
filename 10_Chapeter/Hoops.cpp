#include<bits/stdc++.h>
using namespace std;
int recurson(int i){
   int a=1;
    if(i<=a++){
        return i;
    }
    else{
        return i-1;
    }
}
int main(){
    int T,ans;
    cin>>T;
    while(T--){
       int n,first,secound;
       cin>>n;
       if(n%2!=0){
           ans = recurson(n);
       }
       cout<<ans<<endl;
       
    }
}