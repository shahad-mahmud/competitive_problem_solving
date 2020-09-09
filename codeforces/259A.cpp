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
    ll i,j,T,k=1,n,m,count=0;
    string s;

    for(i=0;i<8;i++)
    {
    	cin>>s;

    	if((s.find("BB")!=string::npos || s.find("WW")!=string::npos) && k==1)
    	{
    		cout<<"NO\n";
    		k=0;
    	}
    }

    if(k==1)
    	cout<<"YES\n";

    return 0;
}