#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        int mxsum = INT_MIN;
    for (int i = 0; i < n; i++)                          //Time 
    {                                                  
        for (int j = i; j < n; j++)                   //Complexity
        {
            int sum = 0;
            for (int k = i; k <= j; k++)               // O(n^3)
            {
                //cout << a[k] << " ";
                sum += a[k];
                mxsum = max(mxsum, sum);             //Bruteforce approch
            }
            // cout << endl;
        }
    }
    cout << mxsum << " " << endl; 

    // int cumsum[n + 1];
    // cumsum[0] = 0;
    //                                                  Time
    // for (int i = 1; i <= n; i++)
    // {
    //     cumsum[i] = cumsum[i - 1] + a[i - 1];       complexity
    // }
    // int mxsum = INT_MIN;
    //                                                  O(n^2)
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = cumsum[i] - cumsum[j];
    //         mxsum = max(mxsum, sum);
    //     }
    // }
    // cout<<mxsum<<endl;
    

//    int cursum = 0;
//    int mxsum = INT_MIN;
//    for (int i = 0; i < n; i++)                  //Kadane Algorithm 
//    {
//        cursum += a[i];                            // Time
//        if(cursum < 0)
//        {
//           cursum = 0;                            // Complexity
//        }
//        mxsum = max(cursum,mxsum);                 //  O(n)
//    }
//    cout<<mxsum<<endl;
    

    
    return 0;
}
