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
    dl a,b,c;

    sl(T);

    while(T--)
    {
    	m=0;
    	sf(a), sf(b), sf(c);

    	printf("%0.2lf\n", sqrt(a*a+b*b+c*c) );
    }

    return 0;
}