#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
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
#define pb(x) push_back(x)

#define fr(a,b) for(i=a;i<b;i++)

#define pi  2*acos(0.0)

std::vector<ll> v;

int main()
{
    ll i,j,T,k=1,n,m,c1=0,c2=1,count;
    string s;

    v.push_back(0);
    v.push_back(1);
    for(i=0;;i++)
    {
    	if(count>10000000009)
    		break;
    	count=c1+c2;
    	c1=c2;
    	c2=count;
    	v.push_back(count);
    	//cout<<count<<endl;
    }

    ll ln=v.size();

    sl(T);
    while(T--)
    {
    	c1=0;
    	sl(n);
    	for(i=0;i<ln;i++)
    	{
    		if(n==v[i])
    		{
    			c1=1;
    			break;
    		}
    	}

    	if(c1)
    		cout<<"IsFibo\n";
    	else
    		cout<<"IsNotFibo\n";
    }

    return 0;
}