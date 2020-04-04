#include <bits/stdc++.h>

using namespace std;
vector<int> Arr;

int main()
{
    int n;cin>>n;
    int a[n];
    int num1=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]==1)
            num1++;
        else
            Arr.push_back(i);
    }
    int Size=Arr.size();
    int Array[Size][Size];
    int MAX;
    if(num1==n)
        MAX=n-1;
    else if(num1==0)
        MAX=n;
    else
    {
        num1++;
        MAX=num1;
        for(int i=0;i<Size;++i)
        {
            for(int j=i+1;j<Size;++j)
            {
                Array[i][j]=num1+2*(j-i)-Arr[j]+Arr[i];
               // cout<<Array[i][j]<<"  ";
                if(MAX<Array[i][j])
                    MAX=Array[i][j];//co the dung ham max nhung toc do chay lau hon
            }
        }
    }

    cout<<endl<<MAX;
    return 0;
}
