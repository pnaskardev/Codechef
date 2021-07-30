#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        string s,party="party";
        cin>>s;
        int lngth=s.length();
        if(lngth<5)
        {
            cout<<s<<endl;
        }
        else
        {
            for(int i=0;i<=lngth-5;i++)
            {
                if(s.compare(i,5,party)==0)
                {   
                    int start=i,end=i+5;
                    s[i+2]='w';
                    s[i+3]='r';
                    s[i+4]='i';
                    
                }
            }
            cout<<s<<endl;
             
        }
        
       
    }
}