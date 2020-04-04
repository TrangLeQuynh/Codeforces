#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string str;cin>>str;
    int SF=0,FS=0;
    for(int i=0;i<n-1;++i)
        if(str[i]=='S'&&str[i+1]=='F')
            SF++;
        else if(str[i]=='F'&&str[i+1]=='S')
            FS++;
    if(SF>FS)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
