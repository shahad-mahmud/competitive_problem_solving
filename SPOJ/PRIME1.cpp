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

#define max 31700

vector <long> prime;
bool mark[1000000009]={false};

int seive()
{
    //prime.push_back(2);
    for(long i=2;i<max;i=i+2)
    {
        if(mark[i]==false)
        {
            prime.push_back(i);
            for(int j=i*i;j<max;j+=(i))
                mark[j]=true;
        }
    }

    return 0;
}

void seg_sieve(ll a, ll b)
{
	if(a%2==0) ++a;
	for(ll i=prime[1];i*i<=b;i++)
	{
		for(ll j=a;j<=b;j=j+2)
		{
			if(j%i==0)
				mark[j]=true;
		}
	}

	for(ll i=a;i<=b;i++)
		if(mark[i]==false)
			printf("%lld\n",i);
}

int main()
{
	mark[0]=mark[1]=true;
	seive();

    ll i,T,k=1,n,m,count=0;

    sl(T);

    while(T--)
    {
    	sl(n);sl(m);

    	if(m<=31700)
    		for(i=n;i<m;i++)
    			if(mark[i]==false)
    				printf("%lld\n",i);
    	else
    		seg_sieve(n,m);
    }

    return 0;
}
