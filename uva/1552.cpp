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

ll hights[50009];

ll FindUpper(ll low, ll high, ll key)
{
	ll mid;

	while(low<=high)
	{
		mid = (low+high)/2;

		if(key == hights[mid])
		{
			low = mid+1;
		}

		else if(key < hights[mid])
			high = mid - 1;
		else 
			low = mid+1;
	}

	return low;
}

ll FindLower(ll low, ll high, ll key)
{
	ll mid;

	while(low<=high)
	{
		mid = (low+high)/2;

		if(key == hights[mid])
		{
			high = mid - 1;
		}

		else if(key < hights[mid])
			high = mid - 1;
		else 
			low = mid+1;
	}

	return low;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    ll inp[25009];

    sl(n);

    for(i=0;i<n;i++)
    	sl(hights[i]);

    sl(m);

    for(i=0;i<m;i++)
    {
    	sl(T);
    	if(T <= hights[0])
    		cout<< "X";
    	else
    		cout<< hights[FindLower(0,n-1,T)-1];
    	cout<<" ";
    	if(T >= hights[n-1])
    		cout<< "X\n";
    	else 
    		cout<< hights[FindUpper(0,n-1,T)]<<endl;
    }

    //cout<< FindLower(0,6,25);
    //cout<< FindUpper(0,6,30);

    return 0;
}
