#include <bits/stdc++.h>

using namespace std;

int searchBinary (vector<int> Arr,int left,int right,int d)
{
    int mid;
    int res=-1;
    while(left<=right)
    {
        mid=(right-left)/2+left;
        if(Arr[mid]<=d)
        {
            res=mid;
            left=mid+1;
        }
        else
            right=mid-1;
    }
    return res;
}

int main()
{
    int n,d;cin>>n>>d;
    string s;cin>>s;
    vector<int> Arr;
    for(int i=0;i<s.length();++i)
        if(s[i]=='1')
            Arr.push_back(i);
    int res=0;
    int index=0;
    while(true)
    {
        index=searchBinary(Arr,index+1,Arr.size()-1,Arr[index]+d);
        if(index==-1)
        {
            res=-1;
            break;
        }
        else
            res++;
        if(index==Arr.size()-1)
            break;
    }
    cout<<endl<<res;
    return 0;
}
