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

ll dp[22][5];
ll N;
ll taka[23][5];

ll way(ll i, ll prev)
{
	if(i==N+1)
		return 0;

    if(dp[i][prev]!= -1)
        return dp[i][prev];

	ll solve= 100000;

	if(prev!=1) solve=min(solve, way(i+1,1)+taka[i][1]);
	if(prev!=2) solve=min(solve, way(i+1,2)+taka[i][2]);
	if(prev!=3) solve=min(solve, way(i+1,3)+taka[i][3]);

	return dp[i][prev]=solve;
}	

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    sl(T);
    while(T--)
    {
        memset(dp, -1, sizeof(dp));
    	sl(N);

    	for(i=1;i<=N;i++)
    		for(j=1;j<=3;j++)
    			sl(taka[i][j]);

    	printf("Case %lld: %lld\n",k++,way(1,0));
    }

    return 0;
}
