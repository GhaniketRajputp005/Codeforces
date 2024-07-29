#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a, b, c, ctr = 0;
    cin >> n;

    while (n--)
    {
        cin >> a >> b >> c;
        if ((b == 1 && a == 1)|| (b == 1 && c == 1) ||(a == 1 && c == 1))
            ctr++;
    }
    cout<<ctr;
   
}