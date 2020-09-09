#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
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
    string s;

    ll num[109],multiple=40,dif;

    for(i=0;i<38;i++)
    	num[i] = i;

    for(i=38;i<101;i++)
    {
    	dif =  multiple - i;

    	if(dif<3)
    		num[i] = multiple;
    	else
    		num[i] = i;

    	if(dif == 0)
    		multiple += 5;
    }

    sl(n);

    for(i=0;i<n;i++)
    {
    	sl(m);
    	printf("%lld\n", num[m]);
    }

    return 0;
}
