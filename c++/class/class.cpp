#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

int main()
{
    Student *rahim = new Student("rahim", 2);
    cout << rahim->name;
    return 0;
}
