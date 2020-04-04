#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2;
    cin>>a1>>a2;
    int minutes=0;
    while(true)
    {
        while(a1<=a2 && a2>2)
        {
            a1++;
            a2-=2;
            minutes++;
        }
        while(a2<=a1 &&a1>2)
        {
            a2++;
            a1-=2;
            minutes++;
        }
        if(a1<=2 && a2<=2)
        {
            if(a1==2||a2==2)
                minutes++;
            break;
        }
    }
    cout<<minutes;
    return 0;
}
