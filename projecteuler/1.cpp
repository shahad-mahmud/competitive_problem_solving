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
    ll i,j,T,k=1,n,m,count=0, sum = 0;
    string s;

    for (i = 1; i < 1000; i++)
    {
    	if(i%3 == 0 || i%5 == 0){
    		sum += i;
    	}
    }

    cout << sum;

    return 0;
}
