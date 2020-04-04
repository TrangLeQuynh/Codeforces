#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a;
    string s;
    for(int i=0;i<n;++i)
    {
        bool check=false;
        cin>>a;
        cin>>s;
        if(a>=11)
            for(int i=0;i<a;++i)
                if(s[i]=='8')
                {
                    if(a-i>=11)
                        check=true;
                    break;
                }
        if(check)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }


    return 0;
}
