#include <bits/stdc++.h>

using namespace std;
map<int,int> MAP;
vector<int> arr;


int main()
{
    int n;cin>>n;
    int a;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i+=2)
        cout<<arr[i]<<" ";
    if(n%2==0)
        n--;
    else
        n-=2;
        cout<<endl;
    for(int i=n;i>0;i-=2)
        cout<<arr[i]<<" ";
    return 0;
}
