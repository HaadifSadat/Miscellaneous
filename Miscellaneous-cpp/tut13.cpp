#include <iostream>
using namespace std;
void km(int arr[], int n)
{
    arr[2] = 546;
}
int main()
{
    int marks[5] = {25, 2, 32, 27, 56};
    int *p = marks;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"index "<<i<<" value "<<marks[i]<<endl;
    // }
    // int i = 0;
    // while (i<5)
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    // int i = 0;
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i<5);

    // cout<<"what's in here marks[0] "<<*p<<endl;
    // cout<<"what's in here marks[1] "<<*(p+1)<<endl;
    // cout<<"what's in here marks[2] "<<*(p+2)<<endl;
    // cout<<"what's in here marks[3] "<<*(p+3)<<endl;
    // cout<<"what's in here marks[4] "<<*(p+4)<<endl;

    // cout<<"what's in here *p "<<*p<<endl;
    // cout<<"what's in here *(p+1) "<<*(p+1)<<endl;
    // cout<<"what's in here *(p+2)"<<*(p+2)<<endl;
    // cout<<"what's in here *(p+3)"<<*(p+3)<<endl;
    // cout<<"what's in here *(p+4)"<<*(p+4)<<endl;

    /* #1 hackersploit
      #2 The Cyber mentor
      #3 (for ctf) John Hammond
      #4 (for bug bounty hunter) STOK
      #5 (for reverse engineering and binary exploitation)liveoverflow
   
   */
    km(marks, 5);
    cout << marks[2] << endl;

    return 0;
}