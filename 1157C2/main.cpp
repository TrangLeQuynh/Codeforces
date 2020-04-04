#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int L1=0,L2=n-1;
    for(int i=1;i<n;++i)
        if(a[i]>a[i-1])
            L1=i;
        else
            break;
    for(int i=n-2;i>=0;i--)
        if(a[i]>a[i+1])
            L2=i;
        else
            break;
    int i=0,j=n-1;
    string res="";
    int x=0;
    while(i<=j)
    {
        if(a[i]<=x&&a[j]<=x)
            break;
        if(a[i]>x && a[j]>x)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                res+='L';
                i++;
            }
            else if(a[i]>a[j])
            {
                x=a[j];
                res+='R';
                j--;
            }
            else
            {
                if((L1-i)>(j-L2))
                {
                    for(int id=i;id<=L1;++id)
                        res+='L';
                    break;
                }
                else
                {
                    for(int id=L2;id<=j;++id)
                        res+='R';
                    break;
                }
            }
        }
        else if(a[i]>x)
        {
            x=a[i];
            res+='L';
            i++;
        }
        else
        {
            x=a[j];
            res+='R';
            j--;
        }
    }
    cout<<res.length();
    cout<<endl<<res;
    return 0;
}
