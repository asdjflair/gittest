#include <iostream>

using namespace std;

class student
{
    int age;
    int no;
    string name;
public:
    student(){};
    student(int a,int n,string name):age(a),no(n),name(name){}
    string getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
    int getno()
    {
        return no;
    }
    void print()
    {
        cout<<name<<age<<no<<endl;
    }
};
