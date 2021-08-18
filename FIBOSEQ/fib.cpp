#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
struct matrix
{
    int arr[2][2];
};
matrix mul(matrix a, matrix b)
{
    matrix c;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<2;col++)
        {
            int here=0;
            for(int i=0;i<2;i++)
            {
                here+=a.arr[row][i]*b.arr[i][col];
            }
            c.arr[row][col]=here;
        }
    }
    return c;
}
matrix identity()
{
    matrix A;
    A.arr[0][0]=1,A.arr[1][1]=1;
    A.arr[0][1]=0,A.arr[1][0]=0;
    return A;
}
//power of matrix
matrix power(matrix a,int n)
{
    if(n==0)
    {
        return identity();
    }
    matrix x=power(a,n/2);
    if(n%2==0)
    {
        return mul(x,x);
    }
    else
    {
        return mul(mul(x,x),a);
    }
}
int get_nth_fib(int n)
{
    matrix fib;
    fib.arr[0][0]=1,fib.arr[0][1]=1;
    fib.arr[1][0]=1,fib.arr[1][1]=0;
    return power(fib,n).arr[0][0];
}
void solve();
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
    vector<int>arr;    
    cout<<get_nth_fib(n)<<endl;
    
}