#include <iostream>
using namespace std;
int sum(int n)
{
    return (n == 0) ? 0 : n + sum(n - 1);
}
int pow(int n, int p)
{
    return (p == 0) ? 1 : n * pow(n, p - 1);
}
// int fact(int n)
// {
//     return (n == 0) ? 1 : n * fact(n - 1);
// }
// int fib(int n)
// {
//     return (n == 0 || n == 1) ? n : fib(n - 1) + fib(n - 2);
// }
bool ck(int arr[], int n)
{
    // if(n == 0)
    // {
    //     return 1;
    // }
    // bool prevck = ck(arr+1,n-1);
    // return arr[0]<arr[1] && prevck;

    return (n == 0) ? 1 : arr[0] < arr[1] && ck(arr + 1, n - 1);
}
// void inc(int n)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     inc(n - 1);
//     cout << n << endl;
// }

// int fstoc(int arr[], int n, int i, int k)
// {
//     if (i == n)
//     {
//         return -1;
//     }
//     return (arr[i] == k) ? i : fstoc(arr, n, i + 1, k);
// }
// int lastoc(int arr[], int n, int i, int k)
// {
//     if (i == n)
//     {
//         return -1;
//     }
//     int rsa = lastoc(arr, n, i + 1, k);
//     if (rsa != -1)
//     {
//         return rsa;
//     }
//     if (arr[i] == k)
//     {
//         return i;
//     }
//     return -1;
// }

// string rv(string s)
// {
// if(s.length() == 0)
// {
//     return "";
// }
// string ros = rv(s.substr(1));
// return ros+s[0];

//     return (s.length() == 0) ? "" : rv(s.substr(1)) + s[0];
// }
// string st(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     if (s[0] == 'p' && s[1] == 'i')
//     {
//         cout << "3.14";
//         return st(s.substr(2));
//     }
//     else
//     {
//         cout << s[0];
//         return st(s.substr(1));
//     }
// }

// void toh(int n, char src, char dest, char hlp)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     toh(n - 1, src, hlp, dest);
//     cout << src << " " << dest << endl;
//     toh(n - 1, hlp, dest, src);
// }
// string rd(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char c = s[0];
//     string ros = rd(s.substr(1));
//     if (c == ros[0])
//     {
//         return ros;
//     }
//     return c + ros;
// }

// string mvx(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ros = mvx(s.substr(1));
//     if (ch == 'x')
//     {
//         return ros + ch;
//     }
//     return ch + ros;
// }

void reverse(string &s, int idx = 0)
{
    if (idx == s.size())
    {
        return;
    }
    reverse(s, idx + 1);
    cout << s[idx];
}

string mvx(string &s, int idx = 0)
{
    if (s.length() == idx)
    {
        return "";
    }
    char ch = s[idx];
    string ros = mvx(s, idx + 1);
    if (ch == 'x')
    {
        return ros + ch;
    }
    return ch + ros;
}

void subs(string s, string ans = "")
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subs(ros, ans);
    subs(ros, ans + ch);
}

string keyp[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "STUV", "WXYZ"};

void crsubs(string s, string ans = "")
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string key = keyp[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < key.length(); i++)
    {
        crsubs(ros, ans + key[i]);
    }
}

unsigned long pp(unsigned long a,unsigned long b,unsigned long n)
{
    unsigned long res = 1;
    while(b > 0)
    {
        if((b & 1) != 0)
        {
            res = (res * a%n)%n; 
        }
        a = (a%n * a%n)%n;
        b = b >> 1;
    }
    return res;
}

int main()
{
    //     int a[] = {8, 5, 1, 7, 6, 2};
    //     // cout<<sum(4)<<endl;
    //     // cout<<pow(4,2)<<endl;
    //     // cout<<fact(5)<<endl;
    //     // cout<<fib(3)<<endl;
    //     // cout<<ck(a,7)<<endl;
    //     // inc(3);
    //     // cout<<fstoc(a,7,0,7)<<endl;
    //     // toh(3,'A','C','B');
    //     // cout<<rv("binod");
    //     // cout<<mvx("amslsamskxxxxxxkxaxsxkxmsxmkxmxxkxxksxmxkxxmxxkxsxaxmxkmxxxxxxkxmmxkxmxxksmxkxxxxxxxxxxxxxxxxxxxxxxxxxkmxmxmxmxmxxxmxxmxmmxxafahgs");
    //     // cout<<lastoc(a,7,0,6);
    //     // cout<<st("popopoppipipiipiiiipipipipipipipppppipiipipipip12231456679ppppppipiipi");
    //     // cout<<rd("popopoppipipiipiiiipipipipipipipppppipiipipipip12231456679ppppppipiipi");
    //     subs("AB");
    //     string st = "axbxcxdxexfx";
    //     string *p = &st;
    // //     cout<<mv(*p);
    //     cout<<mvx(*p)<<endl;
    // crsubs("234");
    cout<<pp(3978432,5,1000000007)<<endl;
    return 0;
}