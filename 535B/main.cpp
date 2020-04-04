#include <bits/stdc++.h>

using namespace std;

/*
lucky number only contain 4 and 7

OUTPUT
numbers of lucky number in [..,n]
*/

int main()
{
    int n;  cin>>n;
    int res=0;
    if(4<=n)
        res++;
    if(7<=n)
        res++;
    else
    {
        cout<<res;
        return 0;
    }
    queue <long long> LuckyNumber;
    LuckyNumber.push(4);
    LuckyNumber.push(7);
    long long x;
    while(true)
    {
        if(LuckyNumber.empty())
            break;
        x=LuckyNumber.front()*10;
        LuckyNumber.pop();
        if(x+4<=n )
        {
            res++;
            LuckyNumber.push(x+4);
        }
        else
            break;

        if(x+7<=n)
        {
            res++;
            LuckyNumber.push(x+7);
        }
        else
            break;
    }
    cout<<res;
    return 0;
}

/*
#include<iostream>
using namespace std;
int main()
{
    int n,k=0,l=0,i;
    cin>>n;
    while(n)
    {
        if(n%10==7)
        k|=(1<<l);
        n/=10;
        l++;
    }
    k+=(1<<l)-1;
    cout<<k;
}
*/
