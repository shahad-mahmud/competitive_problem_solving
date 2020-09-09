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
    ll i,j,T,k=1,n,m,count=0,rslt;
    string s;

    while(scanf("%lld%lld",&n,&m)==2)
    {
    	count=0;
    	for(i=0;i<m;i++)
    	{
    		sl(T);
    		count+=T;
    	}

    	rslt= ceil((double)n/count);

    	cout<< "Project will finish within "<< rslt<< (rslt==1?" day.\n":" days.\n");

    }

    return 0;
}