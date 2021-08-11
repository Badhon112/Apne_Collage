#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int terget;
    cin >> terget;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int lo = i + 1, h1 = n - 1;
        while (lo < h1)
        {
            int current = a[i] + a[lo] + a[h1];
            if (terget == current)
            {
                found = true;
            }
            else if (current < terget)
            {
                lo++;
            }
            else
            {
                h1--;
            }
        }
    }
    if (found)
    {
        cout << "True ";
    }
    else
    {
        cout << "False ";
    }
}