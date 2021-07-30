#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int N,M,zeropresent=0;
        cin>>N>>M;
        int array[N],present[M];
        for(int i=0;i<M;i++)
        {
            present[i]=0;
        }
        while(N--)
        {
            int topic;
            cin>>topic;
            topic--;
            present[topic]=1;
        }
        for(int i=0;i<M;i++)
        {
            if(present[i]==0)
            {
                zeropresent=1;
                break;
            }
        }
        if(zeropresent==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}