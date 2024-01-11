#include <iostream>
using namespace std;
class student
{
    
    protected:
    int n;
    void FuncB()
    {
        cout<<"FuncB"<<endl;
    }
    public:
    int a;
    void FuncA()
    {
        cout<<"FuncA"<<endl;
    }
    void getter_F()
    {
        FuncB();
    }

};
int main()
{
    student s;
    s.FuncA();
    s.a = 8;
    cout<<s.a<<endl;

    s.getter_F();
    return 0;
}