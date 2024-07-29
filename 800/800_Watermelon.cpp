#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 2)
        cout << "NO";
    else
        cout << (num % 2 == 0 ? "YES" : "NO");
}