#include<bits/stdc++.h>
using namespace std;
int Rain_water(vector<int> a){
    stack<int> st;
    int n=a.size(),ans=0;
    for(int i=0;i<n;i++){
        while (!st.empty() and a[st.top()]<a[i])
        {
            int cur=st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff=i-st.top()-1;
            ans+=min(a[st.top()],a[i])-a[cur]*diff;
        }
        st.push(i);
        
    }
    return ans;
}
int main(){
    vector<int> n;
    int ans,N;
    cin>>N;
    for (int i = 0; i <N; i++)
    {
        cin>>ans;
        n.push_back(ans);
    }
    cout<<Rain_water(n);
    

}