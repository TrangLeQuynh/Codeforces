#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;cin>>l;
    string str;
    int n;
    stack <int> value;
    unsigned long long _for=1;
    unsigned long long res=0;
    for(int i=0;i<l;++i)
    {
        cin>>str;
        if(str[0]=='f')
        {
            cin>>n;
            _for*=n;
            value.push(n);
        }
        else if(str[0]=='a')
        {
            res+=_for;
        }
        else if(str[0]=='e')
        {
            _for/=value.top();
            value.pop();
        }
        if(res>((1<<32) -1))
        {
            cout<<"OVERFLOW!!!";
            return 0;
        }
    }
    cout<<res;

    return 0;
}





