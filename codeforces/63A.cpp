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
    string s,t,c;
    std::vector<string> w,v,ra;

    sl(n);
    while(n--)
    {
    	cin>>s>>t;

    	if(t=="woman" || t=="child")
    		w.push_back(s);
    	else if(t=="man")
    		v.push_back(s);
    	else if(t=="rat")
    		ra.push_back(s);
    	else
    		c=s;
    }

    ll ln=ra.size();
    for(i=0;i<ln;i++)
    	cout<< ra[i]<<endl;

    ln=w.size();
    for(i=0;i<ln;i++)
    	cout<< w[i]<<endl;

    ln=v.size();
    for(i=0;i<ln;i++)
    	cout<< v[i]<<endl;

    cout<< c<<endl;


    return 0;
}