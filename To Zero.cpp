#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t, n, k;
    cin >> t;
    for (long long i = 0; i < t; i++) 
    {
        cin>>n>>k;
        if (n%2==0) 
        {
            cout<<(n + k - 2) / (k - 1)<<endl;
        } else 
        {
            cout<<1 + ((n - k) + k - 2) / (k - 1)<<endl;;
        }
    }
    return 0;
}
