#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, res = 0;
    cin >> n;

    //Inti dari bilangan 0 pada hasil permutasi ialah ketika suatu bilangan bertemu dengan
    //kelipatan 5, karena 5 dikali 2 menghasilkan 10, jadi tinggal dibagi aja bilangannya sama kelipatan 5
    for(int i = 5; i <= n; i *= 5){
        res += n / i;
    }
    cout << res << '\n';
}