#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    int a[k];
    int sum=k*(k+1.0)/2;
    if(sum>n)
        cout<<"NO";
    else if(k==1)
    {
        cout<<"YES"<<endl<<n;
    }
    else
    {
        int x=(n-sum)/k;
        if(x<0)
        {
            cout<<"NO";
            return 0;
        }
        n-=(x*k+sum);
        for(int i=0;i<k;++i)
            a[i]=x+1+i;

        if(k>=3){
            int add=0;
            if(n>0){
                for(int i=2;i<k-1;++i)
                {
                    x=a[i]*2-a[i+1];
                    while((k-i+1)*x>n)
                        x--;
                    if(x>0)
                    {
                        add+=x;
                        n-=(k-i)*x;
                    }
                    a[i]+=add;
                }
                if(a[k-2]*2<a[k-1]+add+n)
                {
                        cout<<"NO";
                        return 0;
                }
                a[k-1]+=n+add;
            }
            //KQ
            cout<<"YES"<<endl;
            for(int i=0;i<k;++i)
                cout<<a[i]<<" ";
        }
        else if(n>0)
        {
            if(a[0]*2>=a[1]+n)
            {
                cout<<"YES"<<endl;
                cout<<a[0]<<" "<<a[1]+n;
            }
            else
                cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[1];
        }
    }
    return 0;
}
