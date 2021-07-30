#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define int long long int 
int gcd(int a,int b);
int32_t main(void)
{
        
        ofstream fout;
        string line;
        fout.open("sample.txt");
        int sum=0;
        for(int k=1;k<1000;k++)
        {
            for(int i=1;i<=2*k;i++)
            {
                sum=sum+gcd(k+i*i,k+(i+1)*(i+1));
            }
            sum=sum%1000000007;
            line=to_string(sum);
            fout<<line<<endl;
        }
        fout.close();
}
int gcd(int a, int b)
{
    if (a == b)
        return a;
 
    // GCD(0, b) == b; GCD(a, 0) == a,
    // GCD(0, 0) == 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
 
    // look for factors of 2
    if (~a & 1) // a is even
    {
        if (b & 1) // b is odd
            return gcd(a >> 1, b);
        else // both a and b are even
            return gcd(a >> 1, b >> 1) << 1;
    }
 
    if (~b & 1) // a is odd, b is even
        return gcd(a, b >> 1);
 
    // reduce larger number
    if (a > b)
        return gcd((a - b) >> 1, b);
 
    return gcd((b - a) >> 1, a);
}