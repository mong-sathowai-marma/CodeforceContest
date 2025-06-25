#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,pair=0,count=0;
    cin>>n>>k;
    int arr[n];
    for (int i=2; i<=n; i++)
        {
        bool prime=true;
        for (int j=2; j<=sqrt(i); j++)
        {
            if (i%j==0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            arr[count]=i;
            count++;
        }
    }
    for (int i=0; i<count-1; i++)
    {
        int p1=arr[i];
        int p2=arr[i+1];
        int sum=p1+p2+1;
        if (sum<=n)
        {
            bool prime=true;
            for(int j=2; j<=sqrt(sum); j++)
                {
                if (sum%j==0)
                {
                    prime=false;
                    break;
                }
            }
            if (prime)
            {
                pair++;
            }
        }
    }
    if(pair>=k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

