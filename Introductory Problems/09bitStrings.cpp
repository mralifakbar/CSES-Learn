#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 1;
    cin >> n;

    //Inti dari bilangan 0 pada hasil permutasi ialah ketika suatu bilangan bertemu dengan
    //kelipatan 5, karena 5 dikali 2 menghasilkan 10, jadi tinggal dibagi aja bilangannya sama kelipatan 5
    for(int i = 1; i <= n; i++)
    {
        ans = 2 * ans % ((int)1e9 + 7); //1e9 = 10^9
    }
    cout << ans << endl;
}