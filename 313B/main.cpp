#include <bits/stdc++.h>

using namespace std;

int main()
{
    //input
    string s;cin>>s;
    int m;cin>>m;
    int queries[m][2];
    int Arr[s.size()];
    Arr[0]=0;
    for(int i=1;i<s.size();++i)
    {
        Arr[i]=Arr[i-1];
        if(s[i]==s[i-1])
            Arr[i]++;
    }
    for(int i=0;i<m;++i)
    {
        cin>>queries[i][0]>>queries[i][1];
        cout<<endl<<Arr[queries[i][1]-1]-Arr[queries[i][0]-1];
    }
    return 0;
}
