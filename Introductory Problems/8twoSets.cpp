#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j;
    long long n;
    cin >> n;

    if((n * (1 + n) / 2) % 2 != 0) //Jika Sn ganjil
    {
        cout << "NO\n";
        return 0;
    }

    vector <int> vec1, vec2;
    if(n % 4 == 0)
    {
        j = 4;
        vec1.push_back(1);
        vec1.push_back(4);
        vec2.push_back(2);
        vec2.push_back(3);
    }
    else
    {
        j = 3;
        vec1.push_back(1);
        vec1.push_back(2);
        vec2.push_back(3);
    }

    for(int i = 0; i < (n - 1) / 4; i++)
    {
        vec1.push_back(4 * i + 1 + j);
        vec1.push_back(4 * i + 4 + j);
        vec2.push_back(4 * i + 2 + j);
        vec2.push_back(4 * i + 3 + j);
    }

    cout << "YES\n";
    cout << vec1.size() << '\n';
    for(int i : vec1)
    {
        cout << i << " ";
    }
    cout << '\n';
    
    cout << vec2.size() << '\n';
    for(int i : vec2)
    {
        cout << i << " ";
    }
}