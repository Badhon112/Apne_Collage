#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int **arr, int x, int y, int n, int **solarray)
{
    if (x == n - 1 && y == n - 1)
    {
        solarray[x][y] == 1;
        return true;
    }
    if (isSafe(arr, x, y, n))
    {
        solarray[x][y] = 1;
        if (ratinMaze(arr, x + 1, y, n, solarray))
        {
            return true;
        }
        if (ratinMaze(arr, x, y + 1, n, solarray))
        {
            return true;
        }
        solarray[x][y] = 0; //Baktraking
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int **solarray = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solarray[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solarray[i][j] = 0;
        }
    }
    if (ratinMaze(arr, 0, 0, n, solarray))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solarray[i][j] << " ";
            }
            cout << endl;
        }
    }
}