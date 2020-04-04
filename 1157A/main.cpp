#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string str;cin>>str;
    char f[10];
    int x;
    f[0]='0';
    for(int i=1;i<10;++i)
    {
        cin>>x;
        f[i]=x+'0';
    }
    bool check1=false,check2=false;
    for(int i=0;i<n;++i)
    {
        if(str[i]<f[(int)(str[i]-'0')]&&(!check1 || !check2))
        {
            str[i]=f[(int)(str[i]-'0')];
            check1=true;
        }
        else if(check1&&!check2&&str[i]>f[(int)(str[i]-'0')])
            check2=true;
    }

    cout<<str;
    return 0;
}
