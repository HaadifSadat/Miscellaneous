#include <iostream>
using namespace std;

/*----------------- print all prime numbers using function------------------------

bool isprime(int num)
{
    for (int i = 2; i * i<= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}
*/

/*---------------------------fibonacii series using fuction-----------------------
void print(int mun){
    cout<<mun<<endl;
}
void fibonacii(int num){
    
    int fib  ;
    int a = 0;
    int b = 1;
 for (int i = 1; i <= num; i++)
 {
     fib = a+b;
     cout<<fib<<endl;
     a=b;
     b=fib;

 }
 
}
 int main(){
     int a = 0;
     int b = 1;
     int c ;
     cin>>c;
     print(a);
     print(b);
     fibonacii(c);
     return 0;
 }
 */

/*-------------------------- factorial of a number using fuction ----------------
int factorial(int facto)
{
    int fact = 1;
    for (int i = facto; i > 1; i--)
    {
        fact *= i;
    }

    return fact;
}
int main()
{
    int a ;
    int b ;
    cin>>a>>b;
   cout<<factorial(a)<<endl;
   cout<< factorial(b);
    return 0;
}
*/
/*--------------------------- nCr calculation ----------------------------------
int numert(int n, int r)
{
    int k = 1;
    int l = 1;
    for (int i = 1; i <= r; i++)
    {
         k = k*n;
         n--;
         l = l*i;
    }
    int j = k/l;
    return j;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Ans "<<numert(a,b);
}
*/
/*
--------------------------------with formula for ncr -------------------------------
int factorial(int hmm){
    int fact =1 ;
    for (int i = hmm; i >1; i--)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = factorial(n)/factorial(r)*factorial(n-r);
    cout<< ans;
}
*/
/*---------------------------pascal's binomial triangle -------------------------- 
*/
// int factorial(int hmm)
// {
//     int fact = 1;
//     for (int i = hmm; i >= 1; i--)
//     {
//         fact *= i;
//     }
//     return fact;
// }
// int main()
// {
//     int rows;
//     cin >> rows;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {

//             cout << factorial(i) / (factorial(j) * factorial(i - j))<< "  ";
//         }
//         cout << endl;
//     }
// }
// --------------------- output -------------------------------------
// 1                        0C0
// 1  1                     1C0  1C1
// 1  2  1                  2C0  2C1  2C2
// 1  3  3  1               3C0  3C1  3C2  3C3
// 1  4  6  4  1            4C0  4C1  4C2  4C3  4C4

//------------------------------parctice questions---------------------------
// Question 1
//
//
//
// bool isEven(int num)
// {
//     if (num % 2 == 0)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin>> n;

//     if (isEven(n))
//     {
//         cout << "The number is even";
//     }
//     else
//     {
//         cout << "the number is odd";
//     }

//     return 0;
// }
//
//
//
//Question 2
//
//
//
// bool isChar(char ch)
// {
//     bool flag = false;
//     int a = char(ch);
//     if (a >= 65 && a <= 90)
//     {
//         cout << ch << " is a Alphabet";
//         return true;
//     }
//     else if (a >= 97 && a <= 122)

//     {
//         cout << ch << " is a Alphabet";
//         return true;
//
//     }
//     else
//     {
//         cout <<ch<<  "  Not Alphabet";
//         return false;
//
//     }
// }
// int main(){
//     char apl;
//     cin>> apl;
//     isChar(apl);
//     return 0;
// }
//
// 
// 
// 
// 
// 
// 
// Question 3
//
//
//int maxi(int n1, int n2, int n3)
 //{
//     if (n1 > n2)
//     {
//         if (n1 > n3)
//         {
//             cout << n1;
//         }
//         else                                      
//         {
//             cout << n3;
//         }
//     }                               
//     else
//     {
//         if (n2 > n3)
//         {
//             cout << n2;
//         }
//         else
//         {
//             cout << n3;
//         }
//     }
//     int max = (n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
//     return max;
// }
// int mini(int num1,int num2,int num3){
//      int min =(num1<num2)?(num1<num3)?num1:num3:(num2<num3)?num2:num3;
//     return min ;
// }


// int main()
// {
//     int i, j, k;
//     cin >> i >> j >> k;
//     cout<<"max "<< maxi(i, j, k)<<endl;
//     cout<<"min "<< mini(i,j,k);
//     return 0;
// }
//
//Question 4
// void swap(int n1, int n2){
//     int temp;
//     temp = n1;
//     n1 =n2;
//     n2 =temp;
//     cout<<"value of n11 and n22 "<<n1<<" "<<n2;
// }
// int main(){
//     int n11,n22;
//     cin>>n11>>n22;

//     cout<<"Value of n11 and n22 "<<n11<<" "<<n22<<endl;
//     swap(n11,n22);
//     return 0;
// }
//
/* Question 5
//
//
//
 void eligibiltiy(int age){
     if(age<18){
         cout<<"cant vote";
     }
     else
     {
         cout<<"vote";
     }
          
  }
  int main(){
      int n;
      cin>>n;
      eligibiltiy(n);
      return 0;
  }
*/