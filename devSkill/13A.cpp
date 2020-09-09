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
    ll i,j,T,k=1,n,m=-3434323,count=0;
    ll b,s,g,r;
    ll p[59];

    sl(T);

    for(i=0;i<T;i++)
    {
    	sl(b);sl(s);sl(g);sl(r);

    	p[i]= b*1 + s*3 + g*10 - r*5;

    	printf("Player %lld: %lld\n",i+1,p[i]<=0?0:p[i]);

    	m=max(m,p[i]);
    }

    printf("High Score = %lld\n",m);

    return 0;
}