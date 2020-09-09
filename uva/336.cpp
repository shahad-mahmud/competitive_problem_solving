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

vector<ll> edge[1000];
bool node[1000];

ll bfs(ll source, ll ttl)
{
	queue<int> q;
	ll v,count=0,mx=0;
	ll level[1000];

	q.push(source);
	level[source]=0;

	for(ll i=0;i<1000;i++)
	{
		level[i]=0;
	}

	while(q.empty()==false)
	{
		ll u=q.front();
		q.pop();
		ll size=edge[u].size();

		for(ll i=0;i<size;i++)
		{
			//ll v;
			v = edge[u][i];
			//cout<< 'u'<< v<< endl;
			if(level[v]==0)
			{
				//cout<<v<<" ";
				level[v]=level[u]+1;
				if(level[v]<ttl)q.push(edge[u][i]);
				//cout<< 'v'<< q.front()<< endl;
				count++;
			}
		}
		mx=max(mx,v);
	}

	return count;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    ll u,v;
    
    while(1)
    {
    	for(ll i=0;i<1000;i++)
		{
			node[i]=0;
		}

    	count=0;
    	sl(n);
    	if(n==0)
    		break;

    	for(i=0;i<n;i++)
    	{
    		sl(u); sl(v);

    		edge[u].push_back(v);
    		edge[v].push_back(u);

    		if(node[u]==false)
    			node[u]=true;
    		if(node[v]==false)
    			node[v]=true;
    	}

    	for(i=0;i<1000;i++)
    		if(node[i]==true)
    			count++;

    	//cout<<count;

    	while(1)
    	{
    		sl(u); sl(v);
    		if(u==0 && v==0)
    			break;
    		m=bfs(u,v);
    		if(v==1)
    			m++;
    		j=count- m;
    		printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",k++,j,u,v );
    	}

    	for(i=0;i<1000;i++)
    	{
    		edge[i].clear();
    	}

    }


    return 0;
}
