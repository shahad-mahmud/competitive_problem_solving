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
    ll i,j,T,k=-854545,n,m,count=0;
    string s;

    ll hight[100009];

    sl(n);

    for(i=0;i<n;i++)
    {
    	sl(m);

    	if(m>k)
    	{
    		k = m;
    		count = 1;
    	}
    	else if(m == k)
    		count++;
    }

    cout<< count << endl;

    return 0;
}
