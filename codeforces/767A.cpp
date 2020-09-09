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
    ll i,j,T,k=1,n,m,count=0;
    ll an[100009];

    an[0]=-1;

    sl(n);

    for(i=1;i<=n;i++)
    {
    	sl(an[i]);

    	if((an[i])==n || i==n)
    	{
    		j=i;
    		while(an[j]!= -1)
    		{
    			printf("%lld ",an[j]);
    			an[j]=-1;
    			j--;
    		}
    		printf("\n");
    	}
    	else
    		printf("\n");
    }

    return 0;
}