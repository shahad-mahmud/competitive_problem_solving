#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl double

#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)

#define pi  2*acos(0.0)

//ll weight[1009]={17,23,24};
//ll cost[1009]={72,44,31};
ll weight[1009], cost[1009];
ll n,CAP;
bool mark[1009][31];
ll value[1009][31];

ll find_profit(ll i, ll w)
{
	ll profit1, profit2;
	if(i== n)
		return 0;
	if(mark[i][w]==true)
		return value[i][w];

	if(w+weight[i]<=CAP)
		profit1=cost[i] + find_profit(i+1,w+weight[i]);
	else
		profit1=find_profit(i+1,w);

	profit2= find_profit(i+1,w);

	mark[i][w]=true;
	return value[i][w]= max(profit1,profit2);

}


int main()
{
	CAP=26;
	ll T,g;
	sl(T);
	while(T--)
	{
		ll total=0;
		//memset(mark,false,31279);
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>cost[i]>>weight[i];
			//cout<< cost[i]<<" "<<weight[i]<<endl;
		}

		sl(g);

		for(ll i=0;i<g;i++)
		{
			memset(mark,false,31279);
			//memset(value,0,sizeof(value));
			sl(CAP);
			total+=find_profit(0,0);
			//cout<< CAP<<endl;
		}

		cout<< total<<endl;
	}

	return 0;
}