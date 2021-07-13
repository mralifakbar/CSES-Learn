#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, y = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        y = max(x, y);
        ans += y - x;
    }
    cout << ans << endl;
}