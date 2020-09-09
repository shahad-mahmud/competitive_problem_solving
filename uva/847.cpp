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

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;
    bool stan=true;

    while(sl(n)==1)
    {
    	ll p=1;
    	if(n<=9)
    		stan=true;
    	else
    	{
    		for(i=0;p<n;i++)
    		{
    			if(i%2==0)
    			{
    				p*=9;
    				stan=true;
    			}
    			else
    			{
    				p*=2;
    				stan=false;
    			}
    		}
    	}

    	cout<< (stan?"Stan wins.\n":"Ollie wins.\n");
    }

    return 0;
}