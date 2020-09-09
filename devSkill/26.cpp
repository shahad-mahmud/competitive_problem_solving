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
    char s[1009];

    sl(T);

    while(T--)
    {
    	scanf(" %[^\n]s",s);

        reverse(s,s+strlen(s));
        cout<<s<<endl;
    }

    return 0;
}