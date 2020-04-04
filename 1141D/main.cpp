#include <bits/stdc++.h>

using namespace std;

struct item
{
    int first,second;
};

map<char,int> MAP;
//a=97 z=122
stack<int> letterLeft[123],letterRight[123];
stack<int> marksLeft,marksRight;

int main()
{
    int n;cin>>n;
    string str1,str2;cin>>str1>>str2;
    for(int i=0;i<n;++i)
    {

        if(str1[i]=='?')
            marksLeft.push(i+1);
        else
            letterLeft[(int)str1[i]].push(i+1);

        if(str2[i]=='?')
            marksRight.push(i+1);
        else
            letterRight[(int)str2[i]].push(i+1);
    }

    vector<item > RES;
    item X;
    //process
    for(int i='a';i<='z';++i)
    {
        while(!letterLeft[i].empty() && !letterRight[i].empty())
        {
            X.first=letterLeft[i].top();
            X.second=letterRight[i].top();
            RES.push_back(X);
            letterLeft[i].pop();
            letterRight[i].pop();
        }
    }

    for(int i='a';i<='z';++i)
    {
        while(!letterLeft[i].empty() && !marksRight.empty())
        {
            X.first=letterLeft[i].top();
            X.second=marksRight.top();
            RES.push_back(X);
            letterLeft[i].pop();
            marksRight.pop();
        }
    }

    for(int i='a';i<='z';++i)
    {
        while(!letterRight[i].empty() && !marksLeft.empty())
        {
            X.second=letterRight[i].top();
            X.first=marksLeft.top();
            RES.push_back(X);
            letterRight[i].pop();
            marksLeft.pop();
        }
    }

    while(!marksLeft.empty() && !marksRight.empty())
    {
        X.first=marksLeft.top();
        X.second=marksRight.top();
        RES.push_back(X);
        marksLeft.pop();
        marksRight.pop();
    }

    cout<<RES.size()<<endl;
    for(int i=0;i<RES.size();++i)
        cout<<RES[i].first<<" "<<RES[i].second<<endl;

    return 0;
}
