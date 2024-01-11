// #include <iostream>
// #include <math.h>
#include <bits/stdc++.h>
using namespace std;
//------------------------------------------Sum of n number ----------------------------------
// int sum(int n){
// //   int summ = (n*(n+1))/2;

//   int summ = 0;
//   for (int i = 1; i <= n; i++)
//   { summ+=i;}

//    return summ;

// }
// int main(){
//     int n1;
//     cin>>n1;

//     cout<<sum(n1);
// }
//
//
//
//
//
//
//--------------------------------pythogorian triplet-----------------------
// bool check(int n1, int n2, int n3)
// {
//     int max = (n1 > n2) ? (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3;
//     int min = (n1 < n2) ? (n1 < n3) ? n1 : n3 : (n2 < n3) ? n2 : n3;
//     int big, mid, sml;

//     if (max == n1)
//     {
//         big = n1;
//         mid = n2;
//         sml = n3;
//     }
//     else if (max == n2)
//     {
//         big = n2;
//         mid = n1;
//         sml = n3;
//     }
//     else
//     {
//         big = n3;
//         mid = n1;
//         sml = n2;
//     }

//     if ((big*big) == (mid*mid) + (sml*sml))
//     {
//         return true ;
//     }
//     else
//     {
//         return false ;
//     }

// }
// int main()
// {
//     int a, b, c;

//     cin >> a >> b >> c;
//     if (check(a, b, c))
//     {
//         cout<<"Pythogorian tripplet";
//     }
//     else
//     {
//         cout<<"not trip";
//    }

//     return 0 ;
// }
//
//
//
//
//-----------------------------convertion decimal to octal ----------------------------------
// int con(int n){
//     int i = 0;
//     int stro = 0;
//     while (n>0)

//     {
//         int div = n%10;
//         stro += div*pow(8,i++);
//         n = n/10;
//     }
//     return stro ;
// }
// int main(){
//     int num;
//     cin>> num;
//     cout<<"decimal "<<num<<" octal "<<con(num);
//     return 0;
// }

//------------------------------conevrstion binary to decimal ------------------------------------

// int binarytodecimal(int k)
// {
//     int x = 1;
//     int ans = 0;
//     while (k>0)
//     {
//         int y = k%10;
//         ans = ans+(x*y);
//         x = x*2;     //for octal replace 2 with 8
//         k = k/10;
//     }
//     return ans;
// }
// int main(){
//     int h;
//     cin>>h;
//     cout<<binarytodecimal(h);
// }

//
//
// ---------------------hexadecimal to decimal-------------------
// int hexatodec(string n)
// {
//     int ans = 0;
//     int x = 1;

//     int s = n.size();
//     for (int i = s - 1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//           ans +=x*(n[i]-'0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             ans +=x*(n[i]-'A');
//         }
//     }
//     return ans;
// }
/*----------------------------------------------------------------------------*/
// int binarytodecimal(int n){
//     int bk = 0;
//     int  i = 0;
//     while (n>0)
//     {
//         /* code */
//         int temp = n%10;
//         bk = bk + (temp*pow(2,i++));
//         n = n/10;
//     }

//     return bk ;

// }
//------------------------------------------------------------------------------------------
// int octaltodecimal(int n){
//     int bk = 0;
//     int  i = 0;
//     while (n>0)
//     {
//         /* code */
//         int temp = n%10;
//         bk = bk + (temp*pow(8,i++));
//         n = n/10;
//     }

//     return bk ;

// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<"the decimal number of the fuction"<<octaltodecimal(a);
//     return 0;
// }
// ------------------------------------------------------------------------------------------
// int hexadectodeminal(string b)
// {
//     int ans = 0;
//     int a = b.size();
//     int aka = 0;

//     for (int i = (a - 1); i >= 0; i--)
//     {
//        if (b[i] >= '0' && b[i] <= '9')
//        {
//             ans += (b[i]-'0')*(pow(16,aka++));
//        }
//        else if(b[i] >= 'A' && b[i] <= 'F')
//        {
//            ans += ((b[i]-'A') + 10)*pow(16,aka++);
//        }
//
//     }
//     return ans ;
// }
//
// ----------------------------------------------------------------------------------------------
//
//
//
// int decimaltobinary(int n)
// {
//     int ans = 0;
//     cout << "Decimal to Binary : ";
//     while (n > 0)
//     {
//         int temp = n % 2;

//         cout << temp;
//         n = n / 2;
//     }
// }

// int main()
// {
//     int aez;
//     cin >> aez;

//     decimaltobinary(aez);
//     return 0;
// }
//
//
/*---------------------------------------------------------------------------------------------------------------------*/

// int addBinary()
// {
//     int ans = 0;
//     int pre = 0;

//     while (a > 0 && b > 0)
//     {
//         if (a % 2 == 0 && b % 2 == 0)
//         {
//             ans = ans * 10 + pre;
//             pre = 0;
//         }
//         else if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0))
//         {
//             if (pre == 1)
//             {
//                 ans = ans * 10 + pre;
//                 pre = 1;
//             }
//             else
//             {
//                 ans = ans * 10 + pre;
//                 pre = 0;
//             }
//         }
//         else
//         {
//                 ans = ans * 10 + pre;
//                 pre = 1;
            
//         }
//         a/=10;
//         b/=10;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     cout << addBinary(a, b);
//     return 0;
// }
// int decimaltobinary(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (x<=n)
//     {
//         x*=2;
//     }
//         x/=2;

//     while (x > 0)
//     {
//      int lastdig = n/x;
//      n -= lastdig*x;
//      x/=2;  
//      ans = ans*10 + lastdig;
       
//     }
//     return ans ;
// }
// int binarytodecimal(int n){
//     int bk = 0;
//     int  i = 0;
//     while (n>0)
//     {
//         /* code */
//         int temp = n%10;
//         bk = bk + (temp*pow(2,i++));
//         n = n/10;
//     }

//     return bk ;

// }
// int main(){
//     int inptOf1 ;
//     //   int inptOf2 ;
//     cin>>inptOf1;

//     // int abc = binarytodecimal(inptOf1);
//     // int cba = binarytodecimal(inptOf2);
     
//    cout<< decimaltobinary(inptOf1);
//     return 0;
// }