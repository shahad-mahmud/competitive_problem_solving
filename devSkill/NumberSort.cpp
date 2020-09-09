#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define sf(i) scanf("%lf",&i)
#define pi  2*acos(0.0)

struct info{
	//char given[100000009];
	string given;
	double num;
}inp[1019];

bool compare(info a, info b)
{
	if(a.num<b.num)
	{
		swap(a,b);
		return true;
	}
	return false;
}

int main()
{
    ll i,T,k=1,n,m,count=0,c;
    //double num[1009];

    sl(T);

    while(T--)
    {
    	sl(c);
    	for(i=0;i<c;i++)
    	{
    		cin>>inp[i].given;
    		inp[i].num=atof(inp[i].given.c_str());
    	}
    	sort(inp,inp+c,compare);
    	for(i=0;i<c-1;i++)
    		cout<<inp[i].given<< ',';
    	cout<<inp[i].given<<endl;
    }


    return 0;
}
