#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin, s1);
    transform(s1.begin(), s1.end(), s1.begin(),::toupper);
    cout<<s1<<endl;
    transform(s1.begin(), s1.end(), s1.begin(),::tolower);
    cout<<s1<<endl;
    getline(cin,s2);
    sort(s2.begin(), s2.end(), greater<int>());
    cout<<s2<<endl;
    sort(s2.begin(), s2.end());
    cout<<s2<<endl;





}