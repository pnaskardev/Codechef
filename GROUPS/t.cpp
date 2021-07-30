#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string del(string s,int l)
{
    for(int i=0;i<l-1;i++)
        {
            if(s[i]=='1'&&s[i+1]=='1')
            {
                for(int k=i;k<l;k++)
                {
                    s[k]=s[k+1];
                }
                l--;
            }
        }
        return s;
}
int main(void)
{
    int test;
    cin>>test;
    string s;
    while(test--)
    {

        cin>>s;
        int l=s.size();
        int one=0;
        int zero=0;
        int present=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                present=1;
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(present==1)
        {
            int grps=one-zero;
            cout<<grps<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }    
}