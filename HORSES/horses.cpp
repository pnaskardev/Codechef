#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minimum (int array[],int n)
{
    //start sorting //
    int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    int answer=array[n-1];
    for(int i=0;i<n-1;i++)
    {
        int sub=array[i+1]-array[i];
        answer=min(answer,sub);
    }
    return answer;
}
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        cout<<minimum(array,n)<<endl;
    }

}