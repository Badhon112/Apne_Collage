#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the carrecter"<<endl;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool a=1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            a=0;
            break;
        }
    }
    if(a==true){
        cout<<"palindrom"<<endl;
    }
    else{
        cout<<"Not plindrom"<<endl;
    }


}