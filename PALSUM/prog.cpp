#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool isPalindrome(unsigned n);
int binary(vector<int>&arr,int target);
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
    int n;
    cin>>n;
    vector<int>s;
    vector<int>ans;
    for(int i=0;i<1000;i++)
    {
        if(isPalindrome(i)==true)
        {
            s.push_back(i);
        }
        else
        {
            continue;
        }
    }
    int sum=0;
    while(n>=0 && ans.size()<=12)
    {
        int t=binary(s,n);
        ans.push_back(t);
        n=n-t;
        sum+=t;
    }
    for(auto i:ans)
    {
        if(i!=0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}

int binary(vector<int>&arr,int target)
{
    int start=0,end=arr.size()-1;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target>=arr[mid])
        {
            ans=arr[mid];
            start=mid+1;
        }
        if(target<arr[mid])
        {
            end=mid-1;
        }
    }
    return ans;
}

bool isPalindrome(unsigned n)
{
    // `rev` stores reverse of a binary representation of `n`
    unsigned rev = 0;
 
    // do till all bits of `n` are processed
    unsigned k = n;
    while (k)
    {
        // add the rightmost bit to `rev`
        rev = (rev << 1) | (k & 1);
        k = k >> 1;     // drop last bit
    }
 
    // Returns true if `reverse(n)` is the same as `n`
    return n == rev;
}