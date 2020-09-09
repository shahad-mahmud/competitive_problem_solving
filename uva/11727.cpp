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
    ll s[4];

    sl(T);

    while(T--)
    {
    	sl(s[0]);
    	sl(s[1]);
    	sl(s[2]);

    	sort(s,s+3);

    	cout<< "Case "<<k++<<": "<< s[1]<<endl;
    }

    return 0;
}
