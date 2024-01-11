#include <iostream>
#include <string.h>

using namespace std;
class over
{
    public:
    string s;
    int age,gen;
    over()
    {
        cout<<"constructor"<<endl;
    }
    bool operator == (over &obj) //operator is a keyword
    {
        return ((s == obj.s) && (age == obj.age) && (gen = obj.gen))? true : false;
    }
};
int main()
{
    over a;
    over b(a);
    cout<<(b == a)? true : false;
    return 0;
}