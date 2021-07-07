#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, y, x, ans;
    cin >> t;

    while(t--)
    {
        cin >> y >> x;
        if(y == x)
        {
            ans = (y * y) - (y - 1);
        }
        else if(y > x)
        {
            if(y % 2 == 0)
            {
                ans = pow(y, 2) - (x - 1);
            }
            else
            {
                ans = pow(y - 1, 2) + x;
            }
        }
        else
        {
            if(x % 2 == 1)
            {
                ans = pow(x, 2) - (y - 2);
            }
            else
            {
                ans = (x * (x - 1)) - (x - 1 - y);
            }
        }
        cout << ans << endl;
    }
}