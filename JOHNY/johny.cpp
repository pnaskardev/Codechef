#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int numberofsongs,favsong;
        cin>>numberofsongs;
        int songs[numberofsongs];
        for(int i=1;i<=numberofsongs;i++)
        {
            cin>>songs[i];
        }
        cin>>favsong;
        int uncle=songs[favsong];
        for(int i=2;i<=numberofsongs;i++)
        {
            int current=songs[i];
            int j=i-1;
            while(songs[j]>current&&j>=0)
            {
                songs[j+1]=songs[j];
                j--;
            }
            songs[j+1]=current;
        }
        for(int i=1;i<=numberofsongs;i++)
        {
           if(uncle==songs[i])
           {
               cout<<i<<endl;
           }
           else
           {
               continue;
           }
        }
        
    }
}