#include <bits/stdc++.h>
using namespace std;
//Class
class house
{
    //Member variable
private:
    int length = 0, breath = 0;

    //Member Function
public:
    void setData(int x, int y)
    {
        length = x;
        breath = y;
    }
    void area()
    {
        cout << "Area of that House : " << length * breath << endl;
    }
    void nono(){
        
    }
};

int main()
{
    house h1;
    int a,b;
    cin>>a>>b;
    h1.setData(a, b);
    h1.area();
}