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
    ll i,j,T,k=1,n,mx=-1,cost=0;
    ll wf[109];

    sl(n);

    for(i=0;i<n;i++)
    {
    	sl(j);
    	mx= max(mx,j);

    	wf[i]=j;
    }

    for(i=0;i<n;i++)
    	cost+= (mx-wf[i]);

    cout<< cost<<endl;

    return 0;
}
