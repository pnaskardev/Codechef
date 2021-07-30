#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int inx(string str)
{
    char firstdigit=str[0];
    char lastdigit=str[str.length()-1];
    int a=firstdigit-'0';
    int b=lastdigit-'0';
    int sum=a+b;
    return sum;
}
int main (void)
{
    int test;
    cin>>test;
    string str;
    while(test--)
    {
        cin>>str;   
        cout<<inx(str)<<endl;
    }
}