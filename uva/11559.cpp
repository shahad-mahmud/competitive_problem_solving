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
    ll i,j,T,k=1,n,m,count=1000000000;
    ll b,h,w,cost,value=1000000000;

    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)==4)
    {
    	count=1000000000;
    	value=1000000000;
    	for(i=0;i<h;i++)
    	{
    		sl(cost);
    		for(j=0;j<w;j++)
    		{
    			sl(m);
    			if(m>=n)
    				count=(cost*n);
    			//cout<<count<<" "<<m<<endl;
    		}

    		value=min(value,count);
    	}

    	if(value>b)
    		cout<< "stay home"<<endl;
    	else
    		cout<< value<< endl;
    }

    return 0;
}
