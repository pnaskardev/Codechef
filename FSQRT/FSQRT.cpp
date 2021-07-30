#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while (test--)
    {
        int number;
        cin>>number;
        double square=sqrt(number);
        cout<<round(square)<<endl;
    }
    
}