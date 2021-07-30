#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int lower=0,upper=0,digit=0,spcs=0,start=0,end=0,flag1=0,flag2=0;
        for(int i=1;i<s.length()-1;i++)
        {
            if(isupper(s[i]))
            {
                upper++;
            }
            if(isdigit(s[i]))
            {
                digit++;
            }
            if(s[i]=='@'||s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?')
            {
                spcs++;
            }

        }
        for(int i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                lower++;
            }
        }
        //cout<<upper<<" "<<lower<<" "<<digit<<" "<<spcs<<endl;
        if(upper>=1&&lower>=1&&digit>=1&&spcs>=1&&s.length()>=10)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}
