#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    ll b1,b2,p1,p2;
    ll jitsi, hasrsi;

    sl(T);

    while(T--)
    {
    	jitsi=hasrsi=0;
    	scanf("%lld%lld%lld%lld",&b1,&b2,&p1,&p2);
    	b1+b2>p1+p2?jitsi++:hasrsi++;
    	scanf("%lld%lld%lld%lld",&b1,&b2,&p1,&p2);
    	b1+b2>p1+p2?jitsi++:hasrsi++;
    	if(jitsi==2)
    		printf("Banglawash\n");
    	else
    		printf("Miss\n");
    }


    return 0;
}