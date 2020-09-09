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
    ll num[5];

    while(scanf("%lld%lld%lld",&num[0],&num[1],&num[2])==3)
    {
    	if(num[0]==num[1] || num[0]==num[2] || num[1]==num[2])
    		cout<<num[0]+num[1]+num[2]<<endl;
    	else
    	{
    		sort(num,num+3);

    		cout<< ((num[1]*2)+num[0])<<endl;
    	}
    }

    return 0;
}
