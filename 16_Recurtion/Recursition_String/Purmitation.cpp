#include<bits/stdc++.h>
using namespace std;
void repet(string s, string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    for(int i=0;i<s.length();i++){
        char a=s[i];
        string add=s.substr(0,i)+s.substr(i+1);
        repet(add, ans+a);
    }


}
int main(){
    cout<<"Enter a name: "<<endl;
    string s;
    getline(cin,s);
    repet(s,"");

}