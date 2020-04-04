#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string str[n];
    for(int i=0;i<n;++i)
        cin>>str[i];
    for(int i=1;i<n-1;++i)
    {
        for(int j=1;j<n-1;++j)
            if(str[i][j]=='.')
                if(str[i+1][j]=='.'&&str[i][j+1]=='.'&&str[i-1][j]=='.'&&str[i][j-1]=='.')
                    str[i+1][j]=str[i][j+1]=str[i-1][j]=str[i][j-1]=str[i][j]='#';
    }
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            if(str[i][j]=='.')
            {
                cout<<"NO";
                return 0;
            }
    cout<<"YES";
    return 0;
}
