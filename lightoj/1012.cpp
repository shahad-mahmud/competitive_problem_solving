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

char grid[22][22];
bool visited[22][22];
ll X[]={0,0,1,-1};
ll Y[]={1,-1,0,0};
ll row, column,c=0;

bool isBoundary(ll x, ll y)
{
	return ((x>=0 && x<row) && (y>=0 && y<column));
}

void dfs(ll x, ll y)
{
	for(ll i=0; i<4;i++)
	{
		if(isBoundary(x+X[i],y+Y[i]) && (grid[x+X[i]][y+Y[i]] == '.') && (visited[x+X[i]][y+Y[i]] == false))
		{
			visited[x+X[i]][y+Y[i]] = true;
			c++;
			dfs(x+X[i],y+Y[i]);
		}
	}
}

int main()
{
    ll i,j,T,k=1,n,m;
    string s;

    ll s_x,s_y;

    sl(T);

    while(T--)
    {
    	c=0;
    	sl(column);
    	sl(row);
    	

    	memset(visited, false, sizeof(visited));

    	for(i=0;i<row;i++)
    	{
    		for(j=0;j<column;j++)
    		{
    			cin>>grid[i][j];

    			if(grid[i][j] == '@')
    			{
    				s_x = i;
    				s_y = j;
    				visited[i][j] = true;
    			}
    		}
    	}
    	c=1;
	    dfs(s_x,s_y);

	    printf("Case %lld: %lld\n", k++, c);
    }

    

    return 0;
}
