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
    ll i,j,T,k=1,n,m,count1=0,count2=0;
    string tr[101],pas;
    ll lnt[101];

    sl(n); sl(k);
    m=k;

    for(i=0;i<n;i++)
    {
    	cin>>tr[i];
    	lnt[i]=tr[i].length();
    }

    sort(lnt,lnt+n);

    cin>>pas;

    ll lnp=pas.length();

    for(i=0;i<n;i++)
    {
    	if(lnt[i]<lnp)
    	{
    		count1++;
    		count2++;
    		if(i==k)
    		{
    			count1+=5;
    			count2+=5;
    			k=k+m;
    		}
    	}
    	else
    		break;
    }

    if(i==k)
	{
		count1+=5;
		count2+=5;
		k=k+m;
	}

    for(;i<n;i++)
    {
    	if(lnt[i]==lnp)
    	{
    		count2++;
    		if(i==k)
    		{
    			count2+=5;
    			k=k+m;
    		}
    	}
    }
    cout<<count1+1<<endl<<count2<<endl;


    return 0;
}