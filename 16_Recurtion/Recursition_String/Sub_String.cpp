#include<bits/stdc++.h>
using namespace std;
void Sub_String(string a, string ans){
    if(a.length()==0){
        cout<<ans<<" ";
        return;
    }
    
   char ch=a[0];
   string ros=a.substr(1);

   Sub_String(ros,ans);
   Sub_String(ros,ans+ch);
}
int main(){
    string a;
    getline(cin,a);
    Sub_String(a,"");
}