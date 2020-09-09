#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
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
    ll i,T,k=1,n,m,count=0,sum;
    ll k2,k3,k5,k6;
    ll MIN;

    sl(k2);
    sl(k3);
    sl(k5);
    sl(k6);

    MIN=min(k2,min(k5,k6));

    sum=256*MIN;
    k2=k2-MIN;

    //cout<< k2;

    MIN=min(k2,k3);

    //cout<< MIN<<endl;
    if(MIN>0)
    	sum+= (32*MIN);

    printf("%lld\n",sum);

    return 0;
}
