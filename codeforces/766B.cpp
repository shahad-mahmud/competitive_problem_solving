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
    ll num[100009];
    bool potaka=false;

    sl(n);

    for(i=0;i<n;i++)
    	sl(num[i]);

    sort(num,num+n, greater<int>());

    i=0;

    while(i+2<n && potaka==false)
    {
    	//cout<< 1<<endl;
    	if(num[i]<(num[i+1]+num[i+2]))
    	{
    		potaka=true;
    	}
    	i++;
    }

    if(potaka==true)
    	cout<< "YES\n";
    else
    	cout<< "NO\n";

    return 0;
}