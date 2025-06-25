#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) 
    {
        long long N;
        cin >> N;
        if (N <= 1) 
        {
            cout << "NO" << endl;
        } 
        else if (N == 2) 
        {
            cout << "YES" << endl;
        } 
        else if (N % 2 == 0) 
        {
            cout << "NO" << endl;
        } 
        else 
        {
            bool isPrime = true;
            for (long long i = 3; i * i <= N; i += 2) 
            {
                if (N % i == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) 
            {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
