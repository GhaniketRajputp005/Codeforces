#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> v(4, 0);

    for (auto i : s)
    {
        v[i - '0']++;
    }

    int k = 1;
    for (int i = 0; i < s.length(); i++)
    {
      
        while (v[k] && k < 4)
        {

            s[i] = char(k + '0');

            v[k]--;
            i+=2;
        }
        k++;
        i--;
    }
    cout << s;

    return 0;
}