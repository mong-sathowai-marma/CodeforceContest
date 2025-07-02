
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        long long a, b;
        cin>>a>>b;
        if(b%a==0)
        {
         cout<<(b*b)/a<<endl;
        }
        else
        {
            long long g=__gcd(a, b);// i used gcd build in function
            cout<<(a*b)/g<<endl;
        }
    }
    return 0;
}


