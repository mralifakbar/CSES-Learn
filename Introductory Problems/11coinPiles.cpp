#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a ? "YES" : "NO") << '\n';
    }
}