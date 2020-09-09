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

    sl(T);

    while(T--)
    {
    	sl(n);
    	sl(m);
    	long double pn=n;
    	n=n%1000;
    	ll tail=1;
    	long double c=m*log10(pn);
    	c=c-floor(c);
    	ll head=(ll)pow((long double)10.0,2+c);
    	while(m)
    	{
    		if(m&1) tail=(tail*n)%1000;
    		m>>=1;
    		n=(n*n)%1000;
    	}

    	printf("Case %lld: %lld %3lld\n",k++,head,tail);
    }

    return 0;
}