#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;cin>>str;
    if(str.length()<=20)
    {
        cout<<1<<" "<<str.length();
        cout<<endl<<str;
    }
    else
    {
        int row= str.length()/20.0;
        if(str.length()/20.0 >row)
            row++;
        int col=str.length()/(row*1.0);
        if(str.length()/(row*1.0) >col )
            col++;
        int num=row*col-str.length();
        int idx=0;
        int idx2=0;
        cout<<row<<" "<<col;
        for(int i=0;i<row;++i)
        {
            cout<<endl;
            for(int j=0;j<col;++j)
            {
                if(j==idx &&i==idx&& idx<num )
                {
                    cout<<'*';
                    idx++;
                }
                else
                {
                    cout<<str[idx2++];
                }
            }
        }
    }

    return 0;
}
