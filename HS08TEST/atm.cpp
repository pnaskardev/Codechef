#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    float charge=0.5;
    int withdraw;
    float balance;
    cin>>withdraw;
    cin>>balance;
    if(((withdraw%5)==0)&& (balance-withdraw>=charge))
    {
        float leftbal=balance-withdraw-charge;
       printf("%.2f",leftbal);
        
    }
    else
    {
        printf("%.2f",balance);
    }
    
}