#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
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
#define pb(x) push_back(x)

#define fr(a,b) for(i=a;i<b;i++)

#define pi  2*acos(0.0)

char lower(char c)
{
	if(c>='A' && c<= 'Z')
		return (c-('Z'-'z'));
	else
		return c;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s,p;

    sl(T);

    while(T--)
    {
    	cin>>s;
    	transform(s.begin(),s.end(),s.begin(),lower);

    	ll ln=s.size();

    	for(i=ln-1;i>=0;i--)
    		p+=s[i];

    	cout<< (s==p?"Yes\n":"No\n");
    	
    	p.clear();
    	s.clear();
    }

    return 0;
}