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

int main()
{
    ll i,j,s,t,a,b,m,n,apple,orange, ca=0,co=0;
    //string s;

    sl(s), sl(t), sl(a), sl(b), sl(m), sl(n);

    for(i=0;i<m;i++)
    {
    	sl(apple);
    	if(apple>0)
    	{
    		apple = a+apple;
	    	if( apple>=s && apple <= t)
	    		ca++;
    	}
    }

    for(i=0;i<n;i++)
    {
    	sl(apple);
    	if(apple<0)
    	{
    		apple = b+apple;
	    	if( apple>=s && apple <= t)
	    		co++;
    	}
    }

    printf("%lld\n%lld\n", ca,co);

    return 0;
}
