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

int main()
{
    ll i,j,T,k=1,n,m,count=0,min=1000000;
    string s,t;

    vector<ll> v,V;

    sl(n);
    sl(m);

    cin>>s>>t;

    for(i=0;i<=(m-n);i++)
    {
    	count=0;
    	v.clear();
    	for(j=0;j<n;j++)
    		if(s[j]!=t[i+j])
    		{
    			count++;
    			v.push_back(j+1);
    		}

    	if(min>count)
    	{
    		min=count;
    		V.clear();
    		V=v;
    	}
    }

    cout<<min<<endl;

    ll ln=V.size();

    if(ln!=0){
    for(i=0;i<ln-1;i++)
    {
    	cout<<V[i]<<" ";    
    }

    cout<<V[i]<<"\n";}

    /*v.push_back(5);
    v.push_back(6);

    V=v;

    cout<<V.size();*/

    return 0;
}