#include<bits/stdc++.h>
using namespace std;
int main(){
     string s1,s2;
    getline(cin, s1);
    cout<<s1.size()<<endl;
    //sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    cout<<"IN upper Case"<<endl;
    for(int i=1;i<=s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]=s1[i]-32;
        }
    }
    

    cout<<s1<<endl;
    cout<<"In lower case"<<endl;
    for(int i=1;i<=s1.size();i++){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]=s1[i]+32;
        }
    }
    cout<<s1<<endl;


}