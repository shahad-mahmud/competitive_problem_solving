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
    ll i,j,T,k=1,n,m,count=0;

    string s[100009];
    map<string,ll> p;

    sl(n);

    for(i=0;i<n;i++)
    {
    	cin>> s[i];

    	//cout<< p[s[i]];

    	if(p[s[i]]==0)
    		printf("OK\n");
    	else
    		cout<< s[i]<<p[s[i]]<<"\n";

    	p[s[i]]+=1;
    }

    return 0;
}