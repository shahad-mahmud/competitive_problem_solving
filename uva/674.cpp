#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

ll target;
ll coin[]={50,25,10,5,1};
ll value[7500][6];

ll way(ll amnt, ll i)
{
	if(amnt==0)return 1;
	if(amnt<0) return 0;
	if(i>4) return 0;
	if(value[amnt][i]!= -1)
		return value[amnt][i];
	ll way1=0,way2=0;
	//if(amnt+coin[i]<=target)
	//	way1=way(i,amnt+coin[i]);
	way2=way(amnt-coin[i],i)+way(amnt-coin[i+1],i+1)+way(amnt-coin[i+2],i+2)+way(amnt,i+3);
	value[amnt][i]= way2;
	return way2;
}

int main()
{
    ll i,T,k=1,n,m,count=0;

    memset(value, -1, sizeof(value));

    while(sl(target)==1)
    {
    	//if(target==0)
    	//{
    	//	cout<< 1 <<endl;
    	//	continue;
    	//}
    	//memset(value, -1, sizeof(value));
    	cout<< way(target,0)<<endl;
    }

    return 0;
}