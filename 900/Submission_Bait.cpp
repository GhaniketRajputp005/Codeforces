#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, size;
    unordered_map<int, int> umap;
    cin >> n;
    while (n--)
    {
        cin >> size;

        vector<int> v(size, 0);

        for (int i = 0; i < size; i++)
        {
            cin >> v[i];
        }

        

        for (int i = 0; i < size; i++)
        {
            umap[v[i]]++;
        }
        int flag = 0;
        for (auto i : umap)
        {
            if (i.second % 2 != 0)
            {
                flag = 1;
                break;
                
            }
        }
        cout<<(flag == 1?"YES":"NO")<<endl;
        umap.clear();

        
    }

    return 0;
}