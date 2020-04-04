#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int Len=str1.length()-1;
    for(int i=0;i<=Len;++i)
        if(str1[i]!=str2[Len-i])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
    return 0;
}
