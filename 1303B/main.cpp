#include <bits/stdc++.h>

using namespace std;

long long nationalProject (int n,int g,int b)
{
    int way=0;
    if(g>=b)
    {
        way=g+b;
    }
    else
        way=2*g;

    long long res,day= n/way,B=b-g,N=0;
    if(g>=b||day<=0)
        return n;
    if(n%way==0)
    {
        res=(day-1)*(g+b);
        B*=(day-1);
        N=(day-1)*way;
    }
    else
    {
        res=day*(g+b);
        B*=day;
        N=day*way;
    }

    if(B*2 >= (n-N))
    {
        res+= (n-N)/2;
        if((n-N)%2!=0)
            res++;
    }
    else{
        res+= B;
        N+=B*2;
        res += (n-N);
    }
    return res;

}

int main()
{
    int T,n,g,b;
    freopen("input.txt","r",stdin);
    cin>>T;
    for(int i=0;i<T;++i)
    {
        cin>>n>>g>>b;
        cout<<endl<<nationalProject(n,g,b);
    }
    return 0;
}
