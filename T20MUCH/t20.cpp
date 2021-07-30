#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int R,O,C,numberofballs,requiredrun,remainingovers,maxscore;
    cin>>R>>O>>C;
    requiredrun=R-C;
    remainingovers=20-O;
    numberofballs=remainingovers*6;
    maxscore=numberofballs*6;
    if(maxscore>requiredrun)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}