#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;      cin>>n;
    string str; cin>>str;
    if(n==1||str[0]==')'|| str[n-1]=='(')
    {
        cout<<":(";
        return 0;
    }
    str[0]='(';str[n-1]=')';
    int sum=0;
    for(int i=1;i<n-1;++i)
    {
        if(str[i]=='(')
            sum++;
    }
    int N= (n-2)/2;
    sum=N-sum;
    if(sum>=0)
    {
        int x1=0;
        int x2=0;
        for(int i=1;i<n-1;++i)
        {
            if(str[i]=='?')
            {
                if(sum>0)
                {
                    str[i]='(';
                    sum--;
                }
                else
                    str[i]=')';
            }

            if(str[i]=='(')
                x1++;
            else
                x2++;
            if(x1<x2)
            {
                cout<<":(";
                return 0;
            }

        }
        cout<<str;
    }
    else
        cout<<":(";

    return 0;
}
