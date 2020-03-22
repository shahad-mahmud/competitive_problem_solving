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
#define ssws(s) scanf(" %[^\n]s",s)

#define pi  2*acos(0.0)

#define ll_inf 9223372036854775807
#define dl_inf 1.79769e+308
#define int_inf 2147483647

int main()
{
    ll i,j,T,k=1,n,h,m,count=0;
    string s;
    int max_h[55];
    ll l, r , x;

    sl(n);
    sl(h);
    sl(m);

    for(i = 1; i<=n;i++)
    	max_h[i] = h;

    for(i=1;i<=m;i++){
    	sl(l); sl(r); sl(x);

    	for(j = l; j<= r; j++){
    		if(max_h[j] > x)
    			max_h[j] = x;
    	}
    }

    for(i = 1; i<=n;i++){
    	count += max_h[i] * max_h[i];
    	//cout << max_h[i] << " ";
    }

    printf("%lld\n", count);

    return 0;
}
