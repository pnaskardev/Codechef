#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    
    
    while(test--)
    {
        int serving=0;
        int flag=0;
        int eggcounter=0,milkcounter=0,cakecounter=0;
        int N,eggs,choc,omcost,milcost,cakecost;
        cin>>N>>eggs>>choc>>omcost>>milcost>>cakecost;
        int cost=0;
        bool omcheapest=false;
        bool milkcheapest=false;
        bool cakecheapest=false;
        bool Somcheapest=false;
        bool Smilkcheapest=false;
        bool Scakecheapest=false;
        bool Tomcheapest=false;
        bool Tmilkcheapest=false;
        bool Tcakecheapest=false;
        int array[3];
        array[0]=omcost;
        array[1]=milcost;
        array[2]=cakecost;
        sort(array,array+3);
        if(array[0]==array[1]&&array[1]==array[2]&&array[2]==array[0])
        {
             while(eggs>=2&&serving<N)
            {
                eggcounter++;
                eggs=eggs-2;
                serving++;
            }
            while(choc>=3&&serving<N)
            {
                milkcounter++;
                choc=choc-3;
                serving++;
            }
             while(eggs>=1&&choc>=1&&serving<N)
            {
                cakecounter++;
                eggs=eggs-1;
                choc=choc-1;
                serving++;
            }
            int cost=eggcounter*omcost+milkcounter*milcost+cakecounter*cakecost;
            if(serving>=N)
            {
                cout<<cost<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
                flag=1;
            }

        }
        int cheapest=array[0];
        int secondcheapest=array[1];
        int thirdcheapest=array[2];
        if(cheapest==omcost)
        {
            omcheapest=true;
        }
        else if(cheapest==milcost)
        {
            milcost=true;
        }
        else
        {
            cakecheapest=true;
        }
        if(eggs>=2&&omcheapest==true)
        {
            while(eggs>=2&&serving<N)
            {
                eggcounter++;
                eggs=eggs-2;
                serving++;
            }
        }
        else if(choc>=3&&milkcheapest==true)
        {
            while(choc>=3&&serving<N)
            {
                milkcounter++;
                choc=choc-3;
                serving++;
            }
        }
        else if(cakecheapest==true&&eggs>=1&&choc>=1)
        {
            while(eggs>=1&&choc>=1&&serving<N)
            {
                cakecounter++;
                eggs=eggs-1;
                choc=choc-1;
                serving++;
            }
            
        }
        if(serving<=N)
        {
            if(secondcheapest==omcost)
            {
                Somcheapest=true;
            }
            else if(secondcheapest==milcost)
            {
                Smilkcheapest=true;
            }
            else if(secondcheapest==cakecost)
            {
                Scakecheapest=true;
            }
            if(Somcheapest==true&&eggs>=2)
            {
                while(eggs>=2&&serving<N)
                {
                    eggcounter++;
                    eggs=eggs-2;
                    serving++;
                }
            }
            else if(Smilkcheapest==true&&choc>=3)
            {
                while(choc>=3&&serving<N)
                {
                    milkcounter++;
                    choc=choc-3;
                    serving++;
                }
            }
            else if(Scakecheapest==true&&eggs>=1&&choc>=1)
            {
                while(eggs>=1&&choc>=1&&serving<N)
                {
                    cakecounter++;
                    eggs=eggs-1;
                    choc=choc-1;
                    serving++;
                }
                
                
            }
        }
        
        if(serving<=N)
        {
            if(thirdcheapest==omcost)
            {
                Tomcheapest=true;
            }
            else if(thirdcheapest==milcost)
            {
                Tmilkcheapest=true;
            }
            else if(thirdcheapest==cakecost)
            {
                Tcakecheapest=true;
            }
            if(Tomcheapest==true&&eggs>=2)
            {
                while(eggs>=2&&serving<N)
                {
                    eggcounter++;
                    eggs=eggs-2;
                    serving++;
                }
            }
            else if(Tmilkcheapest==true&&choc>=3)
            {
                while(choc>=3&&serving<N)
                {
                    milkcounter++;
                    choc=choc-3;
                    serving++;
                }
            }
            else if(Tcakecheapest==true&&eggs>=1&&choc>=1)
            {
                while(eggs>=1&&choc>=1&&serving<N)
                {
                    cakecounter++;
                    eggs=eggs-1;
                    choc=choc-1;
                    serving++;
                }
                
                
            }
        }
        cost=eggcounter*omcost+milkcounter*milcost+cakecounter*cakecost;
        if(serving<N&&flag==0)
        {
            cout<<"-1"<<endl;
        }
        else if(flag==0)
        {
            cout<<cost<<endl;
        }
    }
}