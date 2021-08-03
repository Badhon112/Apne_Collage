#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}

void solution1(int arr[],int n){
    for(int i=1;i<=n;i++){
        arr[i]=1;
    }
    sum(arr,n);

}
void solution2(int arr[],int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            arr[i]=2;
        }
        else{
            arr[i]=1;
        }
    }
    sum(arr,n);

}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=1;i<=n;i++){
           cin>>arr[i];
       }
       //less then 2
       if(n<=2){
           solution1(arr,n);
       }
       else{
           solution2(arr,n);
       }


    }
    
}