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
    char s[509];

    cin>> s;

    ll ln= strlen(s);

    m=0;

    for(i=0;i<ln;i++)
    {
    	if(s[i]-'a'>m)
    	{
    		cout<< "NO\n";
    		return 0;
    	}

    	if(s[i]-'a'==m)
    		m++;
    }

    cout<< "YES\n";
    return 0;
}