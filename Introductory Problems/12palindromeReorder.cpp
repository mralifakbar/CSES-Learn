#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int c[26] = {}, countOdd = 0;

    for(char ch : str) 
    {
        c[ch - 'A']++;
    }

    for(int i : c) 
    {
        if(i % 2)
        {
            countOdd++;
        }
    }

    if(countOdd > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string res;

    for(int i = 0; i < 26; i++) // Print yang jumlahnya genap
    {
        if(c[i] % 2 == 0) 
        {
            for(int j = 0; j < c[i] / 2; j++)
            {
                res += (char) ('A' + i);
            }
        }
    }
    
    cout << res;

    for(int i = 0; i < 26; i++) //Yang ganjil
    {
        if(c[i] % 2)
        {
            for(int j = 0; j < c[i]; j++)
            {
                cout << (char) ('A' + i);
            }
        }
    }

    reverse(res.begin(), res.end()); // Revesrse yang genap

    cout << res;
}