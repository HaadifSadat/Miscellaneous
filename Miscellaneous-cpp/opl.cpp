#include <iostream>
using namespace std;

class complex
{
    int real, img;

public:
    complex(){}

    complex(int rl, int ig)
    {
        real = rl;
        img = ig;
    }

    complex operator+(complex &obj)
    {
        complex res;
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }
    void disp()
    {
        cout<<real<<" +i "<<img<<endl;
    }
};
int main()
{
    complex c1(3,4),c2(8,9),c3;
    c3 = c1 + c2;
    c3.disp();
       
    return 0;
}
