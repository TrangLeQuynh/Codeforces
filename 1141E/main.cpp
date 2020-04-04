#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long Hp,Min=1000000,Sum=0;
    int n;
    cin>>Hp>>n;
    int A[n];
    for(int i=0;i<n;++i)
    {
        cin>>A[i];
        Sum+=A[i];
        if(Sum<Min)
            Min=Sum;
    }

    //process
    if(Hp+Min>0 && Sum>=0)
        cout<<-1;
    else
    {
        //cout<<"\n Sum="<<Sum<<endl;
        long long num=0;
        if(Sum<0)
        {
            if(Hp+Min>0)
                num=(Hp+Min)/(-Sum);
            //cout<<"\n num="<<num<<endl;
            Hp+=num*Sum;
            num*=n;
            while(Hp+Min>0)
            {
                Hp+=Sum;
                num+=n;
            }
        }
        for(int i=0;i<n && Hp>0;++i)
        {
            Hp+=A[i];
            num++;
        }
        if(Hp<=0)
            cout<<num;
        else
            cout<<-1;
    }
    return 0;
}
