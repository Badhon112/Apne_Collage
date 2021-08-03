#include<bits/stdc++.h>
using namespace std;
int greaters(int a,int b){
    if(a>b)
        return a;
        return b;
}
int Knapsak(int wt[],int val[], int w,int len){
    if(len==0||w==0)
    return 0;
    if(wt[len-1]>w){
        return Knapsak(wt, val,w,len-1);
    }
    else{
        return greaters(val[len-1]+Knapsak(wt,val,w-wt[len-1],len-1),Knapsak(wt,val,w,len-1));
    }
}
int main(){
    int profit[]={12000,30000,34000,10000,2000,6000};
    int Amount[]= {5,7,4,3,1,2};
    
   int w;
   w=15;
   int len=sizeof(profit)/sizeof(profit[0]);
   int op=Knapsak(Amount,profit,w,len);
   cout<<op;
   return 0;

}