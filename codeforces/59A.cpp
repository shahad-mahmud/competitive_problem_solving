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
    ll i,j,T,k=1,n,m,count=0,a=0,A=0;
    string s;

    cin>>s;

    ll ln=s.length();

    for(i=0;i<ln;i++)
    {
    	if(s[i]>95)
    		a++;
    	else
    		A++;
    }

    if(a>=A)
    	for(i=0;i<ln;i++)
    		s[i]=tolower(s[i]);
    else
    	for(i=0;i<ln;i++)
    		s[i]=toupper(s[i]);

    cout<<s<<endl;

    return 0;
}