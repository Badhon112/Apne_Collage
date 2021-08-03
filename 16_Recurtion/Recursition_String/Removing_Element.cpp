#include<bits/stdc++.h>
using namespace std;
string Remove(string a){
    if(a.length()==0){
        return "";
    }
    char ch=a[0];
    string ans=Remove(a.substr(1));
    if(ch == 'x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }



}
int main(){
    string a;
    getline(cin,a);
   cout<<Remove(a)<<endl;
}