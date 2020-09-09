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
    ll i,j,T,k=1,n,m,count=0,ln=0;

    sl(T);

    while(T--)
    {
    	//cout<< "sd";
        char s[300];
    	ll num=0, rem=0;
    	ll mx=-393, mn= 2323432;
    	count=0;
    	scanf(" %[^\n]s",s);
    	ln=strlen(s);
        s[ln]=' ';
    	//cout<< ln<<endl;
    	for(i=0;i<=ln;i++)
    	{
    		if(s[i]!= ' ')
    		{
    			num=num*10+ (s[i]- '0');
    		}
    		else
    		{
    			mx=max(mx,num);
    			mn=min(mn,num);
                cout<< num<<endl;
    			num=0;
    			count++;
    		}
    	}

    	printf("Case %lld: Among %lld numbers %lld is maximum and %lld is minimum\n",k++,count,mx,mn);
    }

    return 0;
}