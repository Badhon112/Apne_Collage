#include <bits/stdc++.h>
using namespace std;
void insertAtBot(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
    }
    int ele = st.top();
    st.pop();
    insertAtBot(st, ele);
    st.push(ele);
}
void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int number = s.top();
    s.pop();
    reverse(s);
    insertAtBot(s, number);
}
int main()
{
    int n;
    cin >> n;
    stack<int> s1;
    int number;
    while (n--)
    {

        cin >> number;
        s1.push(number);
    }
    reverse(s1);
    while (s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}