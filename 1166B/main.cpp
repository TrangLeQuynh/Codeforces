#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;cin>>k;
    int row=1,col=1;
    string str="aeiou";
    for(int i=5;i<=k/5;++i)
        if(k%i==0 && k/i>=5)
        {
            //process
            row=i;
            col=k/i;
            char s[row][col];
            for(int i=0;i<row;++i)
            {
                for(int j=0;j<col;++j)
                    cout<<str[(i+j)%5];
            }
            return 0;
        }
    cout<<-1;
    return 0;
}
