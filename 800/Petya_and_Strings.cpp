    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        string str1, str2;
        int ans = 0;
        cin >> str1 >> str2;


        for (int i = 0; i < str1.length(); i++)
        {
            char ch1 = tolower(str1[i]);
            char ch2 = tolower(str2[i]);

            if(ch1 == ch2) ans = 0;
            else if (ch1 < ch2){ ans = -1;break;}
            else {ans = 1;break;}

        }
        cout << ans;
        return 0;
    }