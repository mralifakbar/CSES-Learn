#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 1;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        ans = 2 * ans % ((int)1e9 + 7); //1e9 = 10^9
    }
    cout << ans << endl;
}