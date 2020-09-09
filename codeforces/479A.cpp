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

ll result(ll a, ll b, ll c)
{
	ll v1, v2, v3, v4,v5;

	v1 = a + b * c;
	v2 = a * b + c;
	v3 = a * b * c;
	v4 = a *(b + c);
	v5 = (a + b) * c;

	return max(v5,max(v4,max(v3,max(v2,max(v1,a+b+c)))));
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    ll a, b, c;

    sl(a), sl(b), sl(c) ; 

    cout<< result(a,b,c);

    return 0;
}
