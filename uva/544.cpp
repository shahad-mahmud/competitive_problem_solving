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
#define ssws(s) scanf(" %[^\n]s",s)

#define pi  2*acos(0.0)

ll city_map[202][202];

int main()
{
    ll i,j,T,k=1,n,m,index,city,road,cost;
    string c1,c2;
    std::map<string, ll> give_index;

    while(1)
    {
    	sl(city); sl(road);

    	if(city == 0 && road == 0)
    		break;

    	for(i=0;i<202;i++)
    	{
    		for(j=0;j<202;j++)
    			city_map[i][j] = -1;

    		city_map[i][i] = 0;
    	}

    	give_index.clear();
    	index = 0;

    	for(i=0;i<road;i++)
    	{
    		cin>>c1>>c2>>cost;

    		if(!give_index[c1])
    			give_index[c1] = index++;
    		if(!give_index[c2])
    			give_index[c2] = index++;

    		city_map[give_index[c1]][give_index[c2]] = cost;
    		city_map[give_index[c2]][give_index[c1]] = cost;
    	}
    }

    return 0;
}
