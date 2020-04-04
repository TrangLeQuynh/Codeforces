#include <bits/stdc++.h>

using namespace std;

map<int,int> MAP;

int searchBinary (int x,vector<int> Arr,int left,int right)
{
    int res=left;
    int mid;
    while(left<=right)
    {
        mid=(right+left)/2;
        if(Arr[mid]<= x)
        {
            res=mid+1;
            left=mid+1;
        }
        else
            right=mid-1;
    }
    return res;
}

int main()
{
    int n;cin>>n;
    vector<int> priceShop;
    int price;
    for(int i=0;i<n;++i)
    {
        cin>>price;
        priceShop.push_back(price);
    }
    sort(priceShop.begin(),priceShop.end());
    int days;cin>>days;
    int coins[days];
    for(int i=0;i<days;++i)
    {
        cin>>coins[i];
        cout<<upper_bound(priceShop.begin(),priceShop.end(),coins[i])-priceShop.begin()<<endl;
    }
    return 0;
}
