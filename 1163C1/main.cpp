#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x,y;
};

map<Point,int> MAP;

struct Vec{
    float v1,v2;
};


int main()
{
    int n;cin>>n;
    Point a[n];
    for(int i=0;i<n;++i)
        cin>>a[i].x>>a[i].y;
    //process
    vector<Vec> Arr;
    vector<Vec> A[n];
    float tmp;
    for(int i=0;i<n;++i)
    {
        Vec X;

        for(int j=i+1;j<n;++j)
        {
            if(MAP[a[i]]!=0&&MAP[a[i]]==MAP[a[j]])
                continue;
            X.v1=a[i].x-a[j].x;
            X.v2=a[i].y-a[j].y;
            bool check=true;
            for(int id=0;id<A[i].size();++id)
            {
                tmp=(A[i][id].v1*X.v1+A[i][id].v2*X.v2)/(sqrt(A[i][id].v1*A[i][id].v1+A[i][id].v2*A[i][id].v2)*sqrt(X.v1*X.v1+X.v2*X.v2));
                if(tmp==1||tmp==-1)
                {
                    check=false;
                    break;
                }
            }
        }
    }
    return 0;
}
