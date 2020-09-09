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

struct type1
{
	ll a;
	ll b;
}T1[100009];

struct type2
{
	ll c;
	ll d;
}T2[100009];

int main()
{
    ll i,T,n,N,m,k,count=0,time=0;
    ll x,s,d_indx=-1,b_indx=-1,grt=-1;
    ll b_indx1=-1, grt1=10000000000,time1;
    bool f=false;

    sl(n); N=n;
    sl(m);
    sl(k);

    sl(x);
    sl(s);

    for(i=0;i<m;i++)
    	sl(T1[i].a);
    for(i=0;i<m;i++)
    	sl(T1[i].b);

    for(i=0;i<k;i++)
    	sl(T2[i].c);
    for(i=0;i<k;i++)
    {
    	sl(T2[i].d);
    	if(T2[i].d<s)
    		d_indx=i;
    }

    if(d_indx>=0)
    {
    	n=n-T2[d_indx].c;
    	s=s-T2[d_indx].d;
    	time=0;
    }

    for(i=0;i<m;i++)
    {
    	if(T1[i].b>=grt && T1[i].b<=s)
    	{
    		if(T1[i].b==grt)
    		{
    			if(T1[i].a>T1[b_indx].a)
    			{
    				b_indx=i;
    				grt=T1[i].b;
    			}
    		}
    		else if( T1[i].b<=s)
    		{
    			b_indx=i;
    			grt=T1[i].b;
    		}
    	}

    	if(T1[i].a<grt && T1[i].b<= s)
    	{
    		grt1=T1[i].a;
    		b_indx1=i;
    		f=true;
    	}
    }

    if(b_indx>=0)
    {
    	time+= (n*T1[b_indx].a);
    }
    else
    	time+=n*x;

    time1= (N*T1[b_indx1].a);

    if(time1<time && f==true)
    	time=time1;

    cout<< time<<endl;

    return 0;
}
