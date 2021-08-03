#include<bits/stdc++.h>
using namespace std;
void rev(string s){
    if(s.length()==0){
        return ;
    }
    /* if(s[0] == 'p' || s[0] = 'P' && s[1] = 'i' || s[1] = 'I'){
        cout<<"3.1416";
        rev(s.substr(2));
    } */
    if(s[0]=='p'||s[0]=='P' && s[1]=='i'||s[1]=='i'){
        cout<<"3,1416";
        rev(s.substr(2));
    }

    else{
        cout<<s[0];
        rev(s.substr(1));
    }
}
int main(){
    string s;
    getline(cin,s);
    rev(s);

}