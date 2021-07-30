#include<bits/stdc++.h>
using namespace std;
float giveround(float val);
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        float k1,k2,k3,vmax;
        cin>>k1>>k2>>k3>>vmax;
        float mvel=k1*k2*k3*vmax;
        float current=giveround(mvel);
        float record=9.58;
        if(current<record)
        {
            cout<<"YES"<<endl;
        }
        else if(current==9.58||current>9.58)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }    
    
}
float giveround(float val)
{
    float var=(100.0/val);
    cout<<var<<endl;
    var=(int)(var*100+0.5);
    return (float)var/100;
}