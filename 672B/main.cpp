#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    if(n>26)
        cout<<-1;
    else
    {
        set<char> A;
        int Size, res=0;
        for(int i=0;i<n;++i)
        {
            Size=A.size();
            A.insert(s[i]);
            if(A.size()==Size)
                res++;
        }
        cout<<res;
    }
    return 0;
}
