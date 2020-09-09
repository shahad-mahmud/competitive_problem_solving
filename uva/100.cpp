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
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi  2*acos(0.0)

int main()
{
    ll i,T,k=1,n,m=-1,count=1,n1,n2;

	while(scanf("%lld%lld",&n1,&n2)==2)
	{
		printf("%lld %lld ",n1,n2);
		if(n1>n2)
			swap(n1,n2);
		m=0;
	    for(i=n1;i<=n2;i++)
	    {
            n=i;
	    	count=1;
	    	while(n!=1)
		    {
		    	if(n%2==1)
		    		n=(3*n)+1;
		    	else
		    		n=n/2;
		    	count++;

		    }
		    if(count>=m)
		    	m=count;
		 }

        printf("%lld\n",m);
    }

    return 0;
}
