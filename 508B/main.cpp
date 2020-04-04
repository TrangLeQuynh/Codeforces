#include <bits/stdc++.h>

using namespace std;

int main()
{
    string currency;
    cin>>currency;
    int index=currency.length()-1;
    for(int i=0;i<currency.length()-1;++i)
        if(currency[i]%2==0)
        {
            index=i;
            if(currency[i]<currency[currency.length()-1])
                break;
        }
    if(index!=currency.length()-1)
    {
        swap(currency[currency.length()-1],currency[index]);
        cout<<currency;
    }
    else
        cout<<-1;
    return 0;
}
