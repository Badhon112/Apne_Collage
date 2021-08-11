#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool ans=false;
    cin >> s;
    stack<char> a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/')
        {
            a.push(s[i]);
        }
        else if (s[i] == '(')
        {
            a.push(s[i]);
        }
        else if(s[i]==')'){
            if(a.top()=='('){
                ans=true;
            }
            while (a.top() == '+' or a.top() == '-' or a.top() == '*' or a.top() == '/')
            {
                a.pop();
            }
            a.pop();
            
        }
    }

    if(ans==true){
        cout<<"There are Redundant"<<endl;
    }
    else{
        cout<<"There are no Redundant parantaces"<<endl;
    }
}