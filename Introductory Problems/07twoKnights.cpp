#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long res;
    cin >> n;
    for(long long i = 1; i <= n; i++)
    {
        //Kemungkinan semua posisi
        //Kuda 1 = (i * i)
        //Kuda 2 = (i * i) - 1 (karena 1 sudah dipakai kuda 1)
        //Kemudian dibagi 2, karena kuda identik

        //Kemungkinan kuda bisa menyerang
        //Visualisasi dengan papan catur, kuda bisa menyerang di panjang papan 3 * 2 atau 2 * 3
        //Jadi cari berapa banyak 3 * 2 atau 2 * 3 dalam papan seluas i * i
        //Terdapat 2 * (i - 1) * (i - 2) kemungkian 3 * 2 atau 2 * 3
        //Kemudian dari setiap kemungkinan itu terdapat 2 posisi yang bisa berbeda
        //Nonton https://www.youtube.com/watch?v=12Y8OrlRS3U

        res = ((i * i) * (i * i - 1)) / 2 - (4 * (i - 1) * (i - 2));
        cout << res << '\n';
    }
}