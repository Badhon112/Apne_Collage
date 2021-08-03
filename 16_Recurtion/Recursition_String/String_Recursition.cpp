#include<bits/stdc++.h>
using namespace std;
void rev(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    rev(ros);
    cout<<s[0]<<endl;
}
int main(){
    string s;
    getline(cin,s);
    rev(s);
}