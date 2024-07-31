
#include <bits/stdc++.h>
using namespace std;

int main()
{

int idx_i, idx_j;
vector<vector<int>>v(5,vector<int>(5));
for(int i = 0; i < 5; i++){
    for(int j = 0; j< 5; j++){
        cin>>v[i][j];
        if(v[i][j] == 1){
            idx_i = i;
            idx_j = j;
        }
    }
}
cout<< abs(2 - idx_i)+ abs(2 - idx_j);
   
}