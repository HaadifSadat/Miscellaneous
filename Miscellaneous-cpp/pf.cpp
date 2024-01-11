#include <iostream>
using namespace std;
void s(string str)
{
    if (str.length() == 0)
    {
        return ;
    }
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        string restr = str.substr(2);
        s(restr);
    }
    else
    {
        cout << str[0];
        string restr = str.substr(1);
        s(restr);
    }
}
int main()
{
    s("ppppppipppipipiipiipipiipppppppppppiiiiiii");
    return 0;
}