#include <bits/stdc++.h>

using namespace std;
map<int,int> MAP;

int main()
{
    string str;cin>>str;
    for(int i=0;i<str.length();++i)
    {
        MAP[(int)-str[i]]++;
    }
    map<int,int>::iterator id=MAP.begin();
    char s= (char)(-id->first);
    int num=(id)->second;
    for(int i=0;i<num;++i)
        cout<<s;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

main()
{   string s;
    cin >> s;
    char x=*max_element(s.begin(),s.end());
    cout<<setw(count(s.begin(),s.end(),x))<<setfill(x)<<x;}
*/
