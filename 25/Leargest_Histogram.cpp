#include <bits/stdc++.h>
using namespace std;
int Get_Max_area(vector<int> a){
    int n=a.size(),ans=0,i=0;
    a.push_back(0);
    
    
}



int main()
{

    vector<int> a;
    int n,ans;
    cout << "How many number do you want: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ans;
        a.push_back(ans);
    }
    cout<<Get_Max_area( a);
    
}