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

int main()
{
    ll i,T,k=1,n,m,q,count=0;
    ll number[100009];

    sl(T);

    while(T--)
    {
    	printf("Case %lld:\n",k++);
    	sl(n);
    	sl(q);

    	for(i=0;i<n;i++)
    		sl(number[i]);

    	ll a,b;

    	for(i=0;i<q;i++)
    	{
    		sl(a);
    		sl(b);

    		a=lower_bound(number,number+n,a)-number;
    		b=upper_bound(number+a,number+n,b)-number;
    		printf("%lld\n",b-a);
    	}
    }


    return 0;
}
