#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*------declaration-------
    string str = "ApniKAksha";
    // cin>>str;
    string str1(5,'n'); 
    cout<<str1<<" "<<str<<endl;  without spaces
    string str ;
    getline(cin,str);
    */
    // --------- append ------
    /* string s1 = "fam";
    string s2 = "ily";
    // s1.append(s2);
    // cout<<s1<<endl;
    cout<< s1+s2 <<endl;
   */
    // string as arrays
    /* string str1 = "String";
    cout << str1[1] << endl;
    */

    // string s1 = "lowercasechar";
    // cout << s1 << endl;
    //s1.clear();
    //if (s1.empty())
    // {
    //     cout << "s1 is empty"<<endl;
    // }
    string s2 = "lowercasechar";
    // cout<<s2.erase(3, 3)<<endl;
    // cout<<s2.find("char")<<endl;
    cout<<s2.insert(5,"ol")<<endl;
    return 0;
}