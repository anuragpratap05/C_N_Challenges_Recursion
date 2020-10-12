# C_N_Challenges_Recursion
#include<bits/stdc++.h>
using namespace std;

long partition(long a[], long s, long e)
{
    
    long i=s;
    long j=e;
    long x=a[s];
    long count=0;
    for(long i=s+1;i<=e;i++)
    {
        if(a[i]<=x)
        {
            count++;
        }
        
    }
    
    long idx=s+count;
    
    swap(a[s],a[idx]);
    
    while(i<idx or j>idx)
    {
        if(a[i]<=x)
        {
            i++;
        }
        else if(a[j]>x)
        {
            j--;
        }
        else
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return idx;
    
    
}

void qs(long a[], long s, long e)
{
    if(s<e)
    {
        long c=partition(a,s,e);
        qs(a,s,c-1);
        qs(a,c+1,e);
    }
    //return;
}

int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)
    {
        long g;
		cin>>g;

        
        a[i]=g;
        
    }
    
    qs(a,0,n);
    
    for(long i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
}
