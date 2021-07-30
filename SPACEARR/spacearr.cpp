#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int arl;
        cin>>arl;
        int array[arl];
        for(int i=0;i<arl;i++)
        {
            cin>>array[i];
        }
        sort(array,array+arl);
        int counter=0;
        int flag=0;
        for(int i=0;i<arl;i++)
        {
            if((i+1-array[i])<0)
            {
                flag=1;
                break;
            }
             counter=counter+(i+1-array[i]);
        }
        if(flag==1)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            if(counter%2==1)
            {
                cout<<"First"<<endl;
            }
            else
            {
                cout<<"Second"<<endl;
            }

        }
       
    }
}