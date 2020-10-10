# C_N_Challenges_Recursion
#include<bits/stdc++.h>
using namespace std;

void help(string s, char out[],int i, int j)
{
    if(s[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<" ";
        return;
    }
    
    help(s,out,i+1,j);
    
    out[j]=s[i];
    help(s,out,i+1,j+1);
    
    
    //return;
}

int main()
{
  
    string s;
    cin>>s;
    char out[10000];
    help(s,out,0,0);
    cout<<endl;
    cout<<pow(2,s.length());
 
}
