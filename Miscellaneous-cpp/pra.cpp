#include <iostream>
#include <string>
using namespace std;
//int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }
// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     return n * power(n, p-1);
// }
//int factori(int n)
// {
//     if(n==0)return 1;
//     return n*factori(n-1);
// }
//int fib(int n)
// {
//     if(n==0 || n==1)return n;
//     return fib(n-1)+fib(n-2);
// }
//bool check(int n, int arr[])
// {
//     if (n == 1)
//     {
//         return true;
//     }
//     return (arr[0] < arr[1] && check(n - 1, arr + 1));
// }
//void dec(int kem)
// {
//     if(kem == 0)
//     {return ;}
//     cout<<kem<<endl;
//     dec(kem-1);
// }
//void inc(int n)
// {
//     if(n==0)return ;
//     inc(n-1);
//     cout<<n<<" ";
// }
//int firocc(int n,int arr[],int i,int key)
// {
//     if (i ==n)
//     {
//        return -1;
//     }
//
//     if (arr[i] == key)
//     {
//         return i;
//     }
//     return firocc(n,arr,i+1,key);
//
// }
//
//int lastocc(int arr[],int n,int i,int k)
// {
//     if(n == i)
//     {
//         return -1;
//     }
//
//     int subarr = lastocc(arr,n,i+1,k);
//     if(subarr != -1)
//     {
//         return subarr;
//     }
//     if (arr[i]==k)
//     {
//         return i;
//     }
//     return -1;
// }
//void reverse(string str)
// {
//     if(str.length() == 0)
//     {
//         return ;
//     }
//     string subs = str.substr(1);
//     reverse(subs);
//     cout<<str[0];
// }
// void convert(string strr)
// {
//     if (strr.length() == 0)
//     {
//         return;
//     }
//     if (strr[0] == 'p' && strr[1] == 'i')
//     {
//         cout << "3.14";
//         convert(strr.substr(2));
//     }
//     else
//     {
//         cout<<strr[0];
//         convert(strr.substr(1));
//     }
//
// }
// void ToH(int n,char src,char sup,char dest)
// {
//     if(n==0)
//     {return;}
//     ToH(n-1,src,dest,sup);
//     cout<<"move to "<<src<<" destinantion "<<dest<<endl;
//     ToH(n-1,sup,dest,src);
// }
string removedup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removedup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}
int main()
{

    //int arr[] = {4, 2, 1, 2, 5, 2, 7};

    // cout <<sum(n) << endl;
    //cout << power(5, 3) << endl;
    // cout<<factori(n)<<endl;
    // cout<<fib(n)<<endl;
    // cout << check(4, arr) << endl;
    // dec(5);
    // inc(25);
    // cout<<firocc(4,arr,0,5);
    // cout<<lastocc(arr,7,0,2);
    // reverse("binod");
    // convert("pippppiiiipi");
    // ToH(1,'s','h','d');
    cout << removedup("aaaabbeeecddd") << endl;
    return 0;
}