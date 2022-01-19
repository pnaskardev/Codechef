#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    srand(time(0));
    fstream myIN;
    myIN.open("in_0.in",ios::out);//write
    fstream myOUT;
    myOUT.open("out_0.out",ios::out);
    int n;
    cin>>n;
    myIN<<n<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        myIN<<arr[i]<<" ";
    }
    myIN<<endl;
    if(arr[0]==2 && arr[arr.size()-3]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
        myOUT<<"YES"<<endl;
    }
    //2 0 #contigous block# 2 0
    else if(arr[0]==2 && arr[1]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
        myOUT<<"YES"<<endl;
    }
    // 2 0 2 #contigous block# 0
    else if(arr[0]==2 && arr[1]==0 && arr[2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
        myOUT<<"YES"<<endl;
    }
    else if(arr[0]==2 && arr[1]==0 && arr[2]==2 && arr[3]==0)
    {
        cout<<"YES"<<endl;
        myOUT<<"YES"<<endl;
    }
    else if(arr[arr.size()-4]==2 && arr[arr.size()-3]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
        myOUT<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        myOUT<<"NO"<<endl;
    }
}
