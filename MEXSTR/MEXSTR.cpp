#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"0"<<endl;
        }
    }
}