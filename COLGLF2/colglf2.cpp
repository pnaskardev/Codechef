#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int season;
        long long int sum=0;
        cin>>season;
        int introleng[season];//arrays is telling number of introleng in each season
        for(int i=0;i<season;i++)
        {
            cin>>introleng[i];
        }
        for(int i=0;i<season;i++)
        {
            int episodes,duration,flag=0;//episodes in each season
            cin>>episodes;
            for(int j=0;j<episodes;j++)
            {
                cin>>duration;
                if(j==0)
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                }
                if(flag==0)
                {
                    sum=sum+duration;
                }
                else if(flag==1)
                {
                    sum=sum+(duration-introleng[i]);
                }
            }

        }
        cout<<sum<<endl;

    }
}