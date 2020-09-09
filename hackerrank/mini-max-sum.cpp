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
    ll i,j,T,k=1,n,m,min=0,max=0;
    string s;

    ll num[10];

    for(i=0;i<5;i++)
    	cin>>num[i];

    sort(num, num+5);

    for(i=0;i<4;i++)
    	min+=num[i];

    sort(num, num+5, greater<ll>());

    for(i=0;i<4;i++)
    	max+=num[i];

    cout<< min << " " << max<<endl;

    return 0;
}
