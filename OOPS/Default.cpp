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
    };
    person(string name_a, int age_a, float height_a)
    {
        name = name_a;
        age = age_a;
        height = height_a;
    }
    void valid()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Height : " << height << endl;
    }
};
int main()
{
    // person P,
    // P1("Badhon", 20, 5.7),
    // P2("Durjoy", 25, 5.6),
    // P3("Mahabub", 30, 5.5),
    // P4("Mafus", 22, 5.4);
    // P.valid();
    // P1.valid();
    // P2.valid();
    // P3.valid();
    // P4.valid();
    string name;
    int age;
    float height;
    // for (int i = 0; i < 5; i++)
    // {
    //     person P[i];
    // }
    for (int i = 0; i < 3; i++)
    {
        // person P[i];
        // cout << "Name : ";
        cin >> name;
        // cout << endl;
        // cout << "Age : ";
        cin >> age;
        // cout << endl;
        // cout << "Height : ";
        cin >> height;
        // cout << endl;
        person P(name, age, height);
        P.valid();
    }
    // for(int i=0;i<3;i++){
    //     P[i].v
    // }
}