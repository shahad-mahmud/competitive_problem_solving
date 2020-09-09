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

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string ss,s[29]; map<string,ll> p;

    while(sl(n)!= EOF)
    {
    	p.clear();
    	for(i=0;i<n;i++)
    	{
    		cin>>s[i];
    		ss=s[i];

    		if((ss[1]!= '/' && ss[1]!= '-') || ss[0]==ss[2]) sort(s[i].begin(),s[i].end());

    		if(p[s[i]]>0)
    			printf("Instruction %lld: repeat step %lld\n",i+1,p[s[i]]);
    		else
    		{
    			if(ss[1]== '+') printf("Instruction %lld: add %c to %c\n",i+1,ss[0],ss[2]);
    			if(ss[1]== '-') printf("Instruction %lld: subtract %c from %c\n",i+1,ss[2],ss[0]);
    			if(ss[1]== '*') printf("Instruction %lld: multiply %c with %c\n",i+1,ss[0],ss[2]);
    			if(ss[1]== '/') printf("Instruction %lld: divide %c by %c\n",i+1,ss[0],ss[2]);
    		}

    		if(p[s[i]]==0)p[s[i]]=i+1;
    	}
    }

    return 0;
}