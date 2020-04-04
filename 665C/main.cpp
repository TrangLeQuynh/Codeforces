#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    //int res=0;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]==str[i-1])
        {
            //res++;
            str[i]='a';
            while(str[i]==str[i-1] || str[i]==str[i+1])
                str[i]++;
        }
    }
    cout<<str;
    //cout<<endl<<res;
    return 0;
}
