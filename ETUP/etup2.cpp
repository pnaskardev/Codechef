#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int printNcR(int n, int r)
{
    if(n==0)
    {
        return 0;
    }
 
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
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    //arr[0]=-1;
    while(q--)
    {
        int l,r,even=0,odd=0,counteven=0,countodd=0,count=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        //for odd case 
        if(odd>=2)
        {
            countodd=printNcR(odd,2);
            if(even>=1)
            {
                counteven=printNcR(even,1);
            }
        }
        //for even case
        if(even>=3)
        {
            count+=printNcR(even,3);
        }
        count+=(counteven*countodd);
        cout<<count<<endl;
    }
}