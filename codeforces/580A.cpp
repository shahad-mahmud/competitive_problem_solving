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

int main()
{
    ll i,j,T,k=1,n,m,count=1, count_f = -564545789645;
    string s;

    ll num[100009];

    sl(n);

    fr(0,n)
    {
    	sl(num[i]);
    }

    for (i = 0; i < n-1; i++)
    {
    	if(num[i+1]< num[i])
    	{
    		if(count > count_f)
    			count_f = count;
    		count = 1;
    	}
    	else 
    		count++;
    }

    if(count > count_f)
    	count_f = count;

    cout<< count_f;

    return 0;
}
