// #include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x = 0;
    cin >> n;
    char ch;

    while (n--)
    {
        cin.ignore();
        cin>>ch;
        
       ch == '+'? x++ : x--;
        
    }
    cout<<x;
   
}