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

int main()
{
    //j,T,k=1,n,m,count=0;
    string s;

    map<int,int>var;
    var.insert({20,30});
    var[30]=90;
    var[89]=9;

    cout<<var[20];
    std::map<int, int> ::iterator i=var.begin();

    for(;i!=var.end();i++)
    	cout<<i->first<<' '<<i->second<<endl;

    for(auto i:var)
    	cout<<i.first<<' '<<i.second<<endl;

    multimap<int,int>varm;
    varm.insert({20,30});varm.insert({20,56b});
    //varm[30]=90;
    //varm[89]=9;

    //cout<<varm[20];
    std::map<int, int> ::iterator j=varm.begin();

    for(;j!=varm.end();j++)
    	cout<<j->first<<' '<<j->second<<endl;

    for(auto j:varm)
    	cout<<j.first<<' '<<j.second<<endl;

    std::vector<int> v[11];

    /*int m;
    cin>>m;

    std::map<int, int> id;
    int curr=1;
    for(int i=0;i<m;i++)
    {
    	int f,t;
    	cin>>f>>t;

    	if(id[f]==0)
    	{
    		id[f]=curr++;
    		f=id[f];
    	}
    	if(id[t]==0)
    	{
    		id[t]=curr++;
    		t=id[t];
    	}
    	v[f].push_back(t);

    }*/

    return 0;
}