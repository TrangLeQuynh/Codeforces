#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string Game;
    cin>>Game;
    int Anton=0,Danik=0;
    for(int i=0;i<Game.length();++i)
        if(Game[i]=='A')
            Anton++;
        else
            Danik++;
    if(Anton==Danik)
        cout<<"Friendship";
    else if(Anton>Danik)
        cout<<"Anton";
    else
        cout<<"Danik";
    return 0;
}
