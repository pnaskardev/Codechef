#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int digits;
    cin>>digits;
    int array[digits];
    for(int i=0;i<digits;i++)
    {
        cin>>array[i];
    }
    sort(array,array+digits);
    for(int j=0;j<digits;j++)
    {
        cout<<array[j]<<endl;
    }
}