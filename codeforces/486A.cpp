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
    ll i,j,T,k=1,n,m,count=0;
    string s;

    sl(n);

    ll even, odd, e_sum, o_sum;

    if(n%2)
    {
    	cout << (-1) * (n+1)/2;
    }
    else
    	cout << (n)/2;

    // e_sum = ((double)even / 2.0) * (4 + (even - 1) * 2);
    // o_sum = ((double)odd / 2.0) * (2 + (odd - 1) * 2);

    // cout<< e_sum - o_sum;

    return 0;
}
