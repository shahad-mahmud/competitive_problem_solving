#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

vector<ll> graph[20009];
vector<ll> ve;
bool mark[20009];
char color[20009];
ll red=0,blue=0;

void bfs(ll source)
{
	queue<ll> q;
	q.push(source);
	color[source] = 'r';
	red++;

	while(!q.empty())
	{
		ll current= q.front();
		q.pop();

		for(ll i=0;i<graph[current].size();i++)
		{
			ll v = graph[current][i];

			if(mark[v] == false)
			{
				if(color[current] == 'r')
				{
					color[v] = 'b';
					blue++;
				}

				else if(color[current] == 'b')
				{
					color[v] = 'r';
					red++;
				}
				q.push(v);
				mark[v] = true;
			}
		}

		mark[current] = true;
	}
}

int main()
{
    ll i,j,T,k=1,n,m,u,v,count=0,MAX;
    string s;

    sl(T);

    while(T--)
    {
    	MAX = 0;
    	for(i=0;i<20009;i++)
    		graph[i].clear();
    	memset(mark, false, sizeof(mark));
    	memset(color, 'n', sizeof(color));
    	red=blue=0;
    	sl(n);

    	for(i=0;i<n;i++)
    	{
    		sl(u); sl(v);

    		graph[u].push_back(v);
    		graph[v].push_back(u);

    		ve.push_back(u);
    		ve.push_back(v);
    	}

    	for(i=0;i<ve.size();i++)
    	{
    		if(mark[ve[i]]==false)
    		{
    			bfs(ve[i]);
    			MAX += max(red,blue);
    			red=blue=0;
    		}
    	}

    	ve.clear();
    	

    	printf( "Case %lld: %lld\n",k++ ,MAX);
    }

    return 0;
}
