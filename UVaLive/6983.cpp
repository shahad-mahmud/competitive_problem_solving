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

#define pb(a) push_back(a)

int main()
{
    ll i,T,k=1,n,m,count=0,ln;
    ll frq[1009];
    ll num[1009];
    bool f=false;
    vector<ll> v;

    sl(T);

    while(T--)
    {
        for(i=0;i<1009;i++)
            frq[i]=0;
    	f=false;
    	sl(n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%lld",&num[i]);
    		//v.pb(i);

            frq[num[i]]++;

            if(frq[num[i]]>1)
                f=true;
    	}

    	//sort(v.begin(),v.end());

       // ln=v.size();

        //ll lv=unique(v.begin(),v.end())-v.begin();


    	/*for(i=1;i<ln;i++)
    	{
    		if(v[i]==v[i-1])
    		{
    			printf("NO\n");
    			f=true;
    			break;
    		}
    	}*/

    	if(f==false) printf("YES\n");
        else 
            printf("NO\n");
    	v.clear();
    }

    return 0;
}
