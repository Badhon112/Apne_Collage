#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    stack<string> s1;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        s1.push(word);
    }
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}
int main()
{
    string s;
    getline(cin, s);
    reverse(s);
}