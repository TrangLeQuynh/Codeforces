#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a;cin>>a;
    int f[9];
    for(int i=0;i<9;++i)
        cin>>f[i];
    string res="";
    stack<int> A;
    while(a)
    {
        A.push(a%10);
        a/=10;
    }
    bool check=false;
    int i=0;
    char tmp;
    while(!A.empty())
    {
        tmp=(char)(A.top()+'0');
        if(!check && A.top()<f[A.top()-1])
        {
            check=true;
            i=A.top();
            tmp=(char)(f[A.top()-1]+'0');
        }
        else if(check&&A.top()==i)
        {
            tmp=(char)(f[A.top()-1]+'0');
        }
        else if(check&&A.top()!=i)
            break;
        res+=tmp;
        A.pop();
    }
    while(!A.empty())
    {
        res+= (char)(A.top()+'0');
        A.pop();
    }
    cout<<res;
    return 0;
}
