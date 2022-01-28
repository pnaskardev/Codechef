#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int maxim=1e5;
int32_t main(void)
{
    srand(time(0));
    fstream myIN;
    myIN.open("in_0.in",ios::out);//write
    fstream myOUT;
    myOUT.open("out_0.out",ios::out);
    int n=(rand()%2000)+2;
    myIN<<n<<endl;
    vector<int>a(n);
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        a[i]=(rand()%maxim)+1;
        myIN<<a[i]<<" ";
    }
    myIN<<endl;
    for(auto i:a)
    {
        if(i%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    cout<<o<<" "<<e<<endl;
    myOUT<<o<<" "<<e<<endl;
}