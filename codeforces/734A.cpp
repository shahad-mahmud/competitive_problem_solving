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
    ll i,T,k=1,n,m,count=0,a=0,d=0;
    string s;

    sl(n);

    cin>>s;

    for(i=0;i<n;i++)
    {
    	if(s[i]== 'A')
    		a++;
    	else
    		d++;
    }

    if(a>d)
    	printf("Anton\n");
    else if(a<d)
    	printf("Danik\n");
    else
    	printf("Friendship\n");

    return 0;
}
