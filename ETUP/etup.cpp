#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int printNcR(int n, int r)
{
 
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    int p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            int m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    return p;
}
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int n,q;
    cin>>n>>q;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    //arr[0]=-1;
    while(q--)
    {
        int l,r,count=0;
        vector<int>odd,even;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(arr[i]%2==0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }
        //if there more than or equal to 3 even numbers 
        if(odd.size()>=2 && even.size()>=1)
        {
            count=(printNcR(odd.size(),2)*printNcR(even.size(),1));
        }
        if(even.size()>=3)
        {
            count+=printNcR(even.size(),3);
        }
        cout<<count<<endl;
    }
}