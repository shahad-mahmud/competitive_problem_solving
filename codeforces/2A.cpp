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
#include <map>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main()
{
    ll i,j,T,k=1,n,m=-1000000,count=0;

    string s[1009];
    map<string,ll> x,y;
    ll v[1009];

    sl(n);

    for(i=0;i<n;i++)
    {
    	cin>>s[i]>>v[i];
    	x[s[i]]+=v[i];
    }

    for(i=0;i<n;i++) m=max(m,x[s[i]]);

    for(i=0;x[s[i]]<m || (y[s[i]]+=v[i])<m;i++);
    	cout<< s[i]<<endl;
    
    return 0;
}