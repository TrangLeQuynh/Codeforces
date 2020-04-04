#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,Bitcoins;
    cin>>n>>Bitcoins;
    int x1=0,x2=0,A1;
    int Cuts=0,Sum=0;
    int A[n];
    vector<int> B;
    for(int i=0;i<n;++i)
    {
        cin>>A[i];
        if(x1==x2 &&x1!=0)
        {
            x1=x2=0;
            B.push_back(abs(A[i]-A[i-1]));
        }
        if(A[i]%2==0)
            x2++;
        else
            x1++;
    }
    sort(B.begin(),B.end());
    for(int i=0;i<B.size();++i)
    {
        Sum+=B[i];
        if(Sum>Bitcoins)
            break;
        Cuts++;
    }
    cout<<Cuts;
    return 0;
}
