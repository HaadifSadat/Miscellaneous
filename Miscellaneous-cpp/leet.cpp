#include <iostream>
#include <climits>
using namespace std;

namespace leet_code
{

    // First and only argument of input contains an integer array A
    // Output Format:

    //     return a single integer denoting minimum xor value
    // Constraints:

    // 2 <= N <= 100 000
    // 0 <= A[i] <= 1 000 000 000
    // For Examples :

    // Example Input 1:
    //     A = [0, 2, 5, 7]
    // Example Output 1:
    //     2
    // Explanation:
    //     0 xor 2 = 2
    // Example Input 2:
    //     A = [0, 4, 7, 9]
    // Example Output 2:
    //     3
    // Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values .
    uint32_t minxor(uint32_t n, uint32_t arr[])
    {

        uint32_t *ptr = (uint32_t *)malloc(((n - 1) * sizeof(int)));
        for (uint32_t i = 0; i < n - 1; i++)
        {
            uint32_t xorm = 0;
            xorm = arr[i] ^ arr[i + 1];
            ptr[i] = xorm;
            // (xorm == 0)? ptr[i] = 100000 : ptr;
        }
        uint32_t f = UINT32_MAX;
        for (uint32_t i = 0; i < (n - 1); i++)
        {
            f = min(f, ptr[i]);
            // cout<<ptr[i]<<endl;
        }
        free(ptr);
        ptr = NULL;
        // cout << f << endl;
        return f;
    }

}
uint32_t mymin(uint32_t a, uint32_t b);
uint32_t minxor(uint32_t n, uint32_t arr[]);

int main()
{
    uint32_t n;
    cin >> n;
    uint32_t arr[n];
    uint32_t f = UINT32_MAX;
    // for (uint32_t i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    return 0;
}

uint64_t countbit()
{
    uint64_t n = 17;
    uint64_t ans = 0;
    while (n)
    {
        ans++;
        n = n & (n - 1);
    }
    return ans;
}