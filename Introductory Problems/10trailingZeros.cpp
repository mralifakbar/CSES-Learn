#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, res = 0;
    cin >> n;

    for(int i = 5; i <= n; i *= 5){
        res += n / i;
    }
    cout << res << '\n';
}