#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dna;
    char ch, chb;
    int length = 0, i = 1;
    while(cin.get(ch))
    {
        if(ch == '\n')
        {
            break;
        }
        if(dna.length() == 0 || ch == chb)
        {
            dna.push_back(ch);
        }
        else
        {
            if(dna.length() > length)
            {
                length = dna.length();
            }
            dna.clear();
            dna.push_back(ch);
        }
        chb = ch;
    }
    cout << length;
}