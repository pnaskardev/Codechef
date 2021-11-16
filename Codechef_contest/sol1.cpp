#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    srand(time(0));
    int t=(rand()%100)+1;
    fstream myIN;
    myIN.open("in_1.in",ios::out);//write
    myIN<<t<<endl;
    fstream myOUT;
    myOUT.open("out_1.out",ios::out);   
    while(t--)
    {
        int n=(rand()%100)+2;
        double b=(rand()%1000);
        myIN<<n<<" "<<b<<endl;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=(rand()%100);
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
            ans=sum-(double)sum*0.1;
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