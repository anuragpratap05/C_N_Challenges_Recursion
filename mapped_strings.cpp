# C_N_Challenges_Recursion
#include<bits/stdc++.h>
using namespace std;

//char pattern[][26]={'A','A','B','C','C','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void help(string s, int i,int j,char out[])
{
    if(s[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    
    int first=s[i]-'0';
    int second=s[i+1]-'0';
    int digit=(first*10)+second;
    
    char ch=first+'A'-1;
    char ch1=digit+'A'-1;
    
    
    
    out[j]=ch;
    help(s,i+1,j+1,out);
    
    if(s[i+1]!='\0')
    {
    if(digit<=26 )
    {
        out[j]=ch1;
        help(s,i+2,j+1,out);
    }
    }
    return;
}

int main()
{
  
    string s;
    cin>>s;
    char out[100000];
    help(s,0,0,out);
 
}
