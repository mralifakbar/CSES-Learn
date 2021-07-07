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
                ans = (y * y) - (x - 1);
            }
            else
            {
                ans = ((y - 1) * (y - 1)) + x;
            }
        }
        else
        {
            if(x % 2 == 1)
            {
                ans = (x * x) - (y - 2);
            }
            else
            {
                ans = (x * (x - 1)) - (x - 1 - y);
            }
        }
        cout << ans << endl;
    }
}