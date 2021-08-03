#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator a;
    for (a = v.begin(); a != v.end(); a++)
    {
        cout << *a << " ";
    }
    cout << endl;
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
    vector<int> v2(3, 10);
    swap(v, v2);

    for (auto element : v)
    {
        cout << element << " ";
    }
    for (auto element2 : v2)
    {
        cout << element2 << " ";
    }
    sort(v.begin(), v.end());
}