#include <bits/stdc++.h>

using namespace std;

void mergeArr(int *a,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1], R[n2];
    int i,j,k=left;
    for (i=0;i<n1;i++)
        L[i] = a[left+i];
    for (j=0;j<n2;j++)
        R[j] = a[mid+1+j];
    i=j=0;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        a[k]=R[j];
        k++;
        j++;
    }
}

void mergeSort(int *a,int left,int right)
{
    if(left<right){
        int mid=(left+right)/2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);

        mergeArr(a,left,mid,right);
    }

}


int main()
{
        int t;cin>>t;
    int n;
    int left,right;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        int a[n],b[n];
        left=right=-1;
        for(int j=0;j<n;++j)
            cin>>a[j];
        for(int j=0;j<n;++j)
        {
            cin>>b[j];
            if(a[j]!=b[j])
            {
                right=j;
                if(left==-1)
                    left=j;
            }
        }
        if(left==right)
        {
            if(left==-1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else{
            //process merge
            bool check=true;
            //sort
            mergeSort(a,left,right);
            for(int j=left;j<=right;++j)
                if(b[j]!=a[j])
                {
                    check=false;
                    break;
                }
            if(check)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
