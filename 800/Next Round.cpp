
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n , k,ctr = 0;
cin>>n>>k;
vector<int>v(n);
for(int i = 0; i < n ; i++){
    cin>>v[i];
}


    
for(auto i: v){
    if(i >= v[k - 1] && i != 0) ctr++;
}
cout<< ctr;
   
}