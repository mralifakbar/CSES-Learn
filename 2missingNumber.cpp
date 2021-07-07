#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0, inpt, sn;
    cin >> n;
    
    for(int i = 0; i < n - 1; i++)
    {
        cin >> inpt;
        sum += inpt;
    }
    sn = n * (1 + n) / 2;
    cout << sn - sum;
}