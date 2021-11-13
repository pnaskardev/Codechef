#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    srand(time(0));
    int t=(rand()%1000);
    fstream myIN;
    myIN.open("in_final.in",ios::out);//write
    myIN<<t<<endl;
    fstream myOUT;
    myOUT.open("out_final.out",ios::out);   
    while(t--)
    {
        int n=(rand()%10000);
        double b=(rand()%10000);
        myIN<<n<<" "<<b<<endl;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=(rand()%1000);
            myIN<<arr[i]<<" ";
        }
        myIN<<endl;
        double sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        double ans=sum;
        if(sum>1000)
        {
            ans=sum-(double)sum*0.01;
        }
        if(ans>b)
        {
            cout<<"NO"<<endl;
            myOUT<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            myOUT<<"YES"<<endl; 
        }
    }
    myIN.close();
    myOUT.close();
}