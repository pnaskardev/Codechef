#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#define cons 10000
#define int long long int
using namespace std;
void solve();
fstream myIN=fstream("in_5.in",ios::out);
fstream myOUT=fstream("out_5.out",ios::out);
int32_t main(void)
{
    srand(time(0));
    int t=rand()%20+1;
    myIN<<t<<endl;
    while(t--)
    {
        solve();
    }
    myIN.close();
    myOUT.close();
}
void solve()
{
    int n=rand()%2+1;
    int m=rand()%10+1;
    int q=rand()%8+1;
    myIN<<n<<" "<<m<<" "<<q<<endl;
    vector<pair<char,int>>quer;
    int counter=0;
    for(int i=0;i<q;i++)
    {
        char a;
        int r = rand()%2;
        if(r==0)
        {
            a='+';
        }
        else
        {
            a='-';
        }
        int t=rand()%n+1;
        myIN<<a<<" "<<t<<endl;
        quer.push_back(make_pair(a,t));
    }
    int res=0;
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<quer.size();i++)
    {
        if(quer[i].first=='+')
        {
            if(mp.find(quer[i].second)==mp.end())
            {
                counter++;
                mp[quer[i].second]++;
            }
            else
            {
                res=1;
                cout<<"Inconsistent"<<endl;
                myOUT<<"Inconsistent"<<endl;
                return;
            }
        }
        else if(quer[i].first=='-')
        {
            if(mp.find(quer[i].second)==mp.end())
            {
                res=1;
                cout<<"Inconsistent"<<endl;
                myOUT<<"Inconsistent"<<endl;
                return;
            }
            else
            {
                counter--;
                it=mp.find(quer[i].second);
                mp.erase(it);
            }
        }
        if(counter>m)
        {
            res=1;
            cout<<"Inconsistent"<<endl;
            myOUT<<"Inconsistent"<<endl;
            return;
        }
    }
    cout<<"Consistent"<<endl;
    myOUT<<"Consistent"<<endl;
    return;
}