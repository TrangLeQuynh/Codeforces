#include <bits/stdc++.h>

using namespace std;

struct Juice
{
    int price,vitamin;
};
Juice A[1000];

int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;++i)
    {
        cin>>A[i].price;
        cin>>s;
        for(int j=0;j<s.length();++j)
        {
            if(s[j]=='A')
                A[i].vitamin |= 1<<2;
            else if(s[j]=='B')
                A[i].vitamin |= 1<<1;
            else
                A[i].vitamin |= 1<<0;
        }
    }

    return 0;
}
