#include <bits/stdc++.h>
using namespace std;
class person
{
private:
    string name;
    int age;
    float height;

public:
    person()
    {
        name = "NULL";
        age = 0;
        height = 0.0f;
    }
    void valid()
    {
        cout << name << endl;
        cout << age << endl;
        cout << height << endl;
    }
};
int main()
{
    person P;
    P.valid();
    cout<<"Done"<<endl;
}