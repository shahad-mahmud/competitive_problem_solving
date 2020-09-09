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

string s[500009];

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    sl(n);

    for(i=0;i<n;i++)
    	cin>>s[i];

    for(i=n-2;i>=0;i--)
    {
    	if(s[i]>s[i+1])
    		for(j=1;j<s[i].length();j++)
    			if(s[i][j]>s[i+1][j])
    				s[i].resize(j);
    }

    for(i=0;i<n;i++)
    	cout<< s[i]<<endl;

    return 0;
}