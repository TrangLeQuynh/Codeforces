#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string str1,str2;
    for(int i=0;i<n;++i)
    {
        cin>>str1>>str2;
        int id1=0,id2=0;
        bool check=true;
        while(id2<str2.length()||id1<str1.length()){
            if(str1[id1]==str2[id2])
            {
                id1++;
                id2++;
            }
            else
            {
                if(id2>0&&str2[id2]==str2[id2-1])
                    id2++;
                else
                {
                    check=false;
                    break;
                }
            }
        }
        if(check && str2.length()>=str1.length())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
