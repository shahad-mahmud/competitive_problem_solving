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

    ll day = 86400, remains=0,used;

    sl(n), sl(T);

    for(i=0;i<n;i++)
    {
    	sl(day);
    	remains = 86400 - day;

    	if(T>0)
    	{
    		T-=remains;
    		count++;
    	}

    }

    cout<< count<<endl;

    return 0;
}
