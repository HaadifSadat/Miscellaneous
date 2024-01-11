#include<iostream>
using namespace std ;
int main(){
    int a =3;
    int* b = &a;
    
    // & ----> address of operator 
    cout<<"Addres  "<<b<<endl;
    cout<<"vakue  "<<*b<<endl;
    return 0;
}