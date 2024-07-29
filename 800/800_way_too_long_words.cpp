#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    while(n--){
         cin.ignore();
        cin>>str;
       
        int len = str.length();
        cout<<(len>10?str[0]+to_string(len -2)+str[len- 1]:str)<<endl;

    }
    return 0;
}