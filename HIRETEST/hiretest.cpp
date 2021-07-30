#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,m;
        cin>>n>>m;
        int x,y;
        cin>>x>>y;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            int countF=0,countP=0,countU=0,questions=0; 
            while(questions<m)
            {
                if(arr[i][questions]=='F')
                {
                    countF++;
                }
                else if(arr[i][questions]=='P')
                {
                    countP++;
                }
                else if(arr[i][questions]=='U')
                {
                    countU++;
                }
                questions++;
            }
            if(countF>=x||(countP>=y&&countF==(x-1)))
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }

        }

    }
}