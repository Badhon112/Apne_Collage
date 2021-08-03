#include <bits/stdc++.h>
using namespace std;
void sum(int arr[], int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += arr[i];
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = 2;
            }
            else
            {
                arr[i] = 1;
            }
        }
      
        sum(arr, n);
    }
}