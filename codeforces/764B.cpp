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
    ll i,j,T,k=1,n,m,count=0;
    ll num[200009];

    sl(n);

    for(i=1;i<=n;i++)
    	sl(num[i]);

    for(i=1;i<=n/2;i++)
    {
    	if(i&1)
    	{
    		printf("%lld ",num[n-i+1] );
    		num[n-i+1]=num[i];
    	}
    	else
    		printf("%lld ", num[i]);
    }
    for(;i<=n;i++)
    	printf("%lld ",num[i] );

    cout<<endl;

    return 0;
}