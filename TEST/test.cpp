#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main (void)
{
    int input;
    vector<int> integer;
    while(input!=42)
    {  
        cin>>input;
        integer.push_back(input);
    }
    for(int i=0;i<integer.size()-1;i++)
    {
        cout<<integer[i]<<endl;
    }
}