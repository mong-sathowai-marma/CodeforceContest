#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t, n, k;
    
    // Read number of test cases
    cin >> t;

    // For each test case
    for (long long i = 0; i < t; i++) 
    {
        cin >> n >> k;
        if (n % 2 == 0) 
        {
            // If n is even
            cout << (n + k - 2) / (k - 1) <<endl;
        } else {
            // If n is odd
            cout << 1 + ((n - k) + k - 2) / (k - 1) <<endl;;
        }
    }

    return 0;
}
