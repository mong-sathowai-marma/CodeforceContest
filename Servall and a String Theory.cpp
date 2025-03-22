#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1) 
        {
            cout<<"NO"<<endl;
            continue;
        }
        int temp=1;
        for (int i = 1; i < n; i++) 
        {
            if (s[i]!=s[0]) 
            {
                temp=0;
                break;
            }
        }
        if(temp==1) 
        {
            cout<<"NO"<<endl;
            continue;
        }
        int universal = 0;
        for(int i = 0; i < n / 2; i++) 
        {
            int x=n-1-i;
            if(s[i]!=s[x]) 
            {
                if(s[i]<s[x]) 
                {
                    universal=1;
                }
                break;
            }
        }
        if(universal==1) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(k>=1) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
