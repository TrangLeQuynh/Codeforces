#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    bool check=true;
    cin>>s>>t;
    if(s.length()!=t.length())
        check=false;
    else
    {
        for(int i=0;i<s.length();++i)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                if(t[i]!='a'&&t[i]!='e'&&t[i]!='i'&&t[i]!='o'&&t[i]!='u')
                {
                    check=false;
                    break;
                }
            }
            else
            {
                if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
                {
                    check=false;
                    break;
                }
            }
        }
    }
    if(check)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
