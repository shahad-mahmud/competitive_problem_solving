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
#include <utility>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

char grid[22][22];
ll level[22][22];
ll row, column, X[]={0,0,1,-1}, Y[]={1,-1,0,0};

bool inBoundary(ll x, ll y)
{
	return ((x>=0 && x<row) && (y>=0 && y<column));
}

void bfs(ll p, ll m)
{
	pair<ll,ll> point, top;
	queue< pair<ll,ll> >q;
	ll x,y;

	point = make_pair(p,m);

	q.push(point);

	while(!q.empty())
	{
		top = q.front();
		q.pop();
		x=top.first;
		y=top.second;

		for(ll i=0; i<4;i++)
		{
			if(inBoundary(x+X[i],y+Y[i]) && grid[x+X[i]][y+Y[i]] != '#' && grid[x+X[i]][y+Y[i]] != 'm' && (level[x+X[i]][y+Y[i]] ==-1))
			{
				level[x+X[i]][y+Y[i]] = level[x][y]+1;
				point = make_pair(x+X[i],y+Y[i]);
				q.push(point);
			}
		}
		//cout<<x<< " "<<y<<endl;
	}
}


int main()
{
   ll i,j,T,k=1,n,m,count=-5456;
    string s;

    ll ax,ay,bx,by,cx,cy,hx,hy;

    sl(T);

    while(T--)
    {
    	count = -5445;
    	sl(row);
    	sl(column);

    	for(i=0;i<row;i++)
    	{
    		for(j=0;j<column;j++)
    		{
    			cin>> grid[i][j];
    			if(grid[i][j] == 'a')
    			{
    				ax=i;
    				ay=j;
    			}
    			else if(grid[i][j] == 'b')
    			{
    				bx=i;
    				by=j;
    			}
    			else if(grid[i][j] == 'c')
    			{
    				cx=i;
    				cy=j;
    			}
    			else if(grid[i][j] == 'h')
    			{
    				hx=i;
    				hy=j;
    			}
    		}
    	}

    	memset(level, -1, sizeof(level));
    	level[ax][ay]=0;
    	bfs(ax,ay);
    	if(level[hx][hy]>count)
    		count = level[hx][hy];

    	//cout<< level[hx][hy]<<endl;

    	memset(level, -1, sizeof(level));
    	level[bx][by]=0;
    	bfs(bx,by);
    	if(level[hx][hy]>count)
    		count = level[hx][hy];

    	//cout<< level[hx][hy]<<endl;

    	memset(level, -1, sizeof(level));
    	level[cx][cy]=0;
    	bfs(cx,cy);
    	if(level[hx][hy]>count)
    		count = level[hx][hy];

    	//cout<< level[hx][hy]<<endl;

    	printf("Case %lld: %lld\n",k++, count );

    }

    return 0;
}
