#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;cin>>str;
    //QAQ
    string strQAQ="QAQ";
    int Arr[4][str.length()+1];
    for(int i=0;i<=str.length();++i)
        Arr[0][i]=1;
    for(int i=0;i<=3;++i)
        Arr[i][0]=0;
    int res=0;
    for(int i=1;i<=3;++i)
        for(int j=1;j<=str.length();++j)
        {
            if(str[j-1]==strQAQ[i-1])
                Arr[i][j]=Arr[i-1][j]+Arr[i][j-1];
            else
                Arr[i][j]=Arr[i][j-1];
        }
    cout<<Arr[3][str.length()];
    return 0;
}
