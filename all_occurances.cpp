#include<bits/stdc++.h>
using namespace std;

void help(int a[], int n ,int m,int i)
{
    if(i==n)
    {
        return;
    }
    
    
    if(a[i]==m)
    {
        cout<<i<<" ";
    }
    help(a,n,m,i+1);
    return;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    help(a,n,m,0);
}
