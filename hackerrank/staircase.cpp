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

    sl(n);

    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-(i+1);j++)
    		printf(" ");
    	for(;j<n;j++)
    		printf("#");
    	cout<<endl;
    }

    return 0;
}
