#include <iostream>
using namespace std;

bool getb(int n, int pos)
{
    return ((n | 1 << pos) != 0);
}
int setb(int n, int pos)
{
    return (n | (1 << pos));
}
int clearb(int n, int pos)
{
    int mask = ~(1 << pos);
    return n & mask;
}
int update(int n, int pos, int value)
{
    int k = n & (~(1 << pos));
    return k | (value << pos);
}
void subsets()
{
    string s = "abc";
    for (int i = 0; i < (1 << s.length()); i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (i & (1 << j))
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}
bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos)
{
    return (n | (1 << pos));
}
int uni(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 31; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}
unsigned int fast(unsigned int a, unsigned int b, unsigned int n)
{
    unsigned int res = 1;
    while (b > 0)
    {
        if ((b & 1) != 0)
        {
            res = (res * a % n) % n;
        }
        a = ((a%n)*(a%n))%n;
        b >>= 1;
    }
    return res;
}

int jcob(int n,int k)
{
    // if(n == 1)
    // {
    //     return 0;
    // }
    // return (jcob(n-1,k)+k)%n;


    return (n == 1)? 0 : (jcob(n-1,k)+k)%n;
}

int32_t main()
{
    cout<<fast(397,3,1000000007);
}


// int main()
// {
//     int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
//     // cout << unique(arr, 10) << endl;
//     // cout << uni(arr, 10) << endl;
       // cout<<fast(3978432,5,1000000007);
//     // cout<<jcob(5,3)<<endl;
//     return 0;
// }
