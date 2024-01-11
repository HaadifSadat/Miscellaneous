#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{5, 1, 4, 1, 1};
    int cnt = 0;
    int idx = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == v[idx])
        {
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0)
        {
            cnt = 0;
            idx = i;
        }
    }
    cout<<v[idx]<<endl;
    return 0;
}