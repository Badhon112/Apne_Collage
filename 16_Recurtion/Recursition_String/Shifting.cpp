#include<bits/stdc++.h>
using namespace std;
void Shift(int n,char source, char destination, char helper){
    if(n==0){
        return;
    }
    Shift(n-1, source, helper,destination);
    cout<<"Moving from "<<source<<" TO "<<destination<<endl;
    Shift(n-1, helper, destination,source); 

}

int main(){
    int n;
    char a,b,c;
    cout<<"Enter how many block do you want:"<<endl;
    cin>>n;
    cout<<"Enter the Source Destination and the Healper"<<endl;
    cin>>a>>c>>b;
    Shift(n,a,b,c);

}