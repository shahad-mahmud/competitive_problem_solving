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

#define max 100

vector<ll> graph[max];

double bfs(ll root)
{
	ll level[max]={0};
	queue<ll> q;

	level[root]=0;
	q.push(root);

	while(!q.empty())
	{
		ll current= q.front();
		q.pop();

		//cout<<graph[2][0]<<endl;
		for(ll i=0;i<graph[current].size();i++)
		{
			ll v = graph[current][i];
			cout<<graph[current].size();
			if(level[v]==0)
			{
				level[v]=level[current]+1;
				q.push(v);
				
			}
			else
				return 0;
		}
	}
	return 1;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    ll x,y,l;

    while(1)
    {
    	scanf("%lld",&n);
    	if(n==0)
    		break;
    	sl(l);

    	for(i=0;i<l;i++)
    	{
    		sl(x);sl(y);
    		graph[x].push_back(y);
    		//graph[y].push_back(x);
    	}
    	if(bfs(0))
	    	cout<< "BICOLORABLE.\n";
	    else
	    	cout<< "NOT BICOLORABLE.\n";
    }

    return 0;
}