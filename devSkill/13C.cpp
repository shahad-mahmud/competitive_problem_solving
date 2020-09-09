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

ll gcd(ll a, ll b)
{
    return b==0?a: gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
    return ((a/gcd(a,b))*b);
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    ll r1,r2;

    sl(T);

    while(T--)
    {
    	sl(r1);
    	sl(r2);

    	r1+=r1;
    	r2+=r2;

    	cout<< lcm(r1,r2)<<endl;
    }

    return 0;
}