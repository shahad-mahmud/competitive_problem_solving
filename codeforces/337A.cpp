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

#define fr(a,b) for(i = a; i < b; i++)

ll n,m;
ll f[52];

// int result(ll i,ll max,ll min,ll dif,ll count, ll j)
// {
// 	//cout<< j<< endl;
// 	if(count == n)
// 		return dif;
// 	if(i >= m)
// 		return int_inf;
// 	if(j >= 2*m)
// 		return int_inf;

// 	max = f[i] > max? f[i] : max;
// 	min = f[i] < min? f[i] : min;
// 	dif = max - min;

// 	dif = dif<0? (-1) * dif: dif; 

// 	ll rs1 = result(i, max, min, dif, count, ++j );
// 	ll rs2 = result(i+1, max, min, dif, count+1, ++j );

// 	return (rs1<rs2? rs1 : rs2);
// }

int main()
{
    ll i,j,T,k=1,count=0;
    ll s1, s, dif1, dif_f=65465456;

    

    sl(n), sl(m);

    fr(0,m)
    {
    	sl(f[i]);
    }

    sort(f, f+m);
   

    for(i=0;i+n-1 < m;i++)
    {
    	s = f[i];
    	s1 = f[i+n-1];
    	dif1 = abs(s-s1);
    	if(dif1<dif_f)
    		dif_f = dif1;
    }

    cout<< dif_f;

    return 0;
}
