#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,v;
    /*
        n: the number of cities
        v: the capacity of the tank
    */
    cin>>n>>v;
    int need=n-1;
    int money=0;
    if(need<=v)
        money=need;
    else
    {
        money=v;
        need-=v;
        int i=2;
        while(need!=0)
        {
            money+=i;
            i++;
            need--;
        }
    }
    cout<<money;
    return 0;
}
