#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
using namespace std;
int main(void)
{
    int n,k,counter;
    counter=0;
    cin>>n>>k;
    long long array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }   
    for(int j=0;j<n;j++)
    {
        if((array[j]%k)==0)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}