#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)

#define pi  2*acos(0.0)

int main()
{
    vector<ll> dis;
    ll i,T,k=1,n,m,count=0,number[3009];//dis[3009];

    while(sl(n)==1)
    {
        k=1;
        sl(number[0]);
        for(i=1;i<n;i++)
        {
            sl(number[i]);
            T=(abs(number[i]-number[i-1]));
            dis.push_back(T);
        }
        sort(dis.begin(),dis.end());
        for(i=1;i<n;i++)
        {
            if(dis[i]!= i)
            {
                k=0;
                break;
            }
        }
        if(k==1)
        {
            cout<< "Jolly\n";
        }


        else
        {
            printf("Not jolly\n");
            //return 0;
            //break;
        }
        dis.clear();
    }



    return 0;
}

