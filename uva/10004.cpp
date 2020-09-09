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

vector<ll> edge[201];
queue<ll> q;
ll level[201];

ll bfs(ll source)
{
	if(edge[source].size()==0)
		bfs(source+1);

	q.push(source);
	level[source]=0;

	ll i=0,u,v;

	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for(i=0;i<edge[u].size();i++)
		{
			v=edge[u][i];
			if(level[v]==0)
            {
                q.push(v);
				level[v]=level[u]+1;
            }
			else
				return 0;
		}
	}

	return 1;
}

int main()
{
    ll i,j,T,k=1,n,e,x,y,m,count=0;
    string s;

    while(1)
    {
    	memset(level,0,201);
    	sl(n);
    	sl(e);
    	if(n==0)
    		break;

    	while(e--)
    	{
    		sl(x); sl(y);

    		edge[x].push_back(y);
    		//edge[y].push_back(x);
    	}

    	if(bfs(0)==1)
    		cout<< "NOT BICOLORABLE.\n";
    	else
    		cout<< "BICOLORABLE.\n";
    }

    return 0;
}