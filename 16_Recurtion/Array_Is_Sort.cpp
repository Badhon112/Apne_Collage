#include<bits/stdc++.h>
using namespace std;
bool Arr(int arr[],int n){
   /*  if(n==0){
        return 0;
    }
    if(Arr(arr, n)>Arr(arr,n-1)){
        return true;
    } */
    if(n==1){
        return true;
    }
    bool restArray=Arr(arr+1,n-1);
    if(arr[0]<arr[1]&& restArray){
        return true;

    }
    else{
        return false;
    }





}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=Arr(arr,n);
    if(ans==true){
        cout<<"Array is Sortad"<<endl;
    }
    else{
        cout<<":Array is Not Sorted"<<endl;
    }




}