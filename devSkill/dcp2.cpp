#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

//******************gcd function****************
ll gcd(ll a, ll b)
{
    return b==0? a: gcd(b,a%b);
}
//******************gcd function****************

int main()
{
    ll i,j,T,k=1,n,m,count=0,e,ek[15],g;
    string s;


    while(sl(e)==1)
    {
    	sl(n);

    	for(i=0;i<n;i++)
    	{
    		sl(ek[i]);
    	}

    	g=ek[0];

    	for(i=0;i<n;i++)
    		g=gcd(g,ek[i]);

    	for(i=0;i<n;i++)
    	{
    		e-=(ek[i]/g);
    	}

    	printf("Output: %lld\n", e);
    }

    return 0;
}
