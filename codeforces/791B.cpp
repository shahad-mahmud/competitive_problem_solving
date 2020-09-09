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
//***********************************
#define element 150000
ll parent[element];

void makeSet()
{
    for(ll i=0;i<element;i++)
        parent[i]=i;
}

ll find(ll a)
{
    if(parent[a]==a)
        return a;
    parent[a]=find(parent[a]);
    return parent[a];
}

void Union(ll a,ll b)
{
    ll u=find(a);
    ll v=find(b);

    if(u==v)
        cout<< "They are friend\n";
    else
        parent[u]=v; //make them friend.
}
//***********************************

vector<ll> v[150000];

int main()
{
    ll i,j,T,k=1,n,m,count=0,a;
    string s;

    sl(n);sl(m);

    for(i=0;i<m;i++)
    {
    	sl(T);
    	sl(a);
    	v[T].push_back(a);
    }

    for(i=0;i<m;i++)
    {
    	//bool fl=false;
    	if(v[i].size()!=0)
    	{
    		for(j=0;j<v[i].size();j++)
    		{
    			a=v[i][j];
    			//bool fl=false;
    			if(v[a].size()!=0)
    			for(k=0;k<v[a].size();k++)
    			{
    				bool fl=false;
    				ll b=v[a][k];
    				for( ll ii=0;ii<v[i].size();ii++)
    				{
    					if(b==v[i][ii])
    						fl=true;
    				}
    				if(fl==false)
    				{
    					cout<<"NO\n";
    					return 0;
    				}
    			}
    		}
    	}
    }

    cout<< "YES\n";

    return 0;
}