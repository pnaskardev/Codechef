#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    string s;
    while(test--)
    {

        cin>>s;
        int l=s.size();
        int counter=0,flag=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1'&&flag==0)
            {
                counter++;
                flag=1;
            }
            if(s[i]=='0'&&flag==1)
            {
                flag=0;
            }
        }
        cout<<counter<<endl;
    }
    
}