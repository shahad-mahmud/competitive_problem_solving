#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

int main()
{
    ll i,j,T,k=1,n,m=-56456,count=0;
    string s[109];
    map<string,ll>mp;

    sl(n);
    for(i=0;i<n;i++)
    {
    	cin>>s[i];
    	mp[s[i]]++;
    	m=max(m,mp[s[i]]);
    }

    cout<<m<<endl;

    return 0;
}