#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many number do you want:"<<endl;
    cin.ignore();
    cin>>n;
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i,current=0,maxlen=0,max=0,st=0;
    while (1)
    {
        if(arr[i] == ' '||arr[i] == '\0'){
            if(current>maxlen){
                maxlen=current;
                max=st;
            }
            current=0;
            st=i+1;
        }
        current++;

        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;

   

}