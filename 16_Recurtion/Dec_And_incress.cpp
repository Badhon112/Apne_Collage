#include<bits/stdc++.h>
using namespace std;
void De_in(int n){
    if(n==0){
        return;
    }
    /* if(n<=10){
        return;
    } */
    
    cout<<n<<endl;
    /* De_in(n-1);;
    cout<<n<<endl; */
    De_in(n-1);
}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
   De_in(n);
   inc(n);
}