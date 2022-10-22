#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    student s(20,1234,"tom");
    cout<<s.getname()<<endl;
    s.print();
    return 0;
}
