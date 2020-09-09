#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define si(i) scanf("%d",&i)
#define sl(i) scanf("%lld",&i)
#define pi  2*acos(0.0)

int main()
{
    ll i,T,k=1,n,m,count=0,lsum=0,rsum=0;
    ll left[100009], right[100009], dis=0,fdis=0,indx,hf,hr,buty,nbuty,LL,RR;
    bool flag=false;
    sl(n);

    for(i=0;i<n;i++)
    {
    	sl(left[i]);
    	sl(right[i]);
    	dis=abs(left[i]-right[i]);
    	if(dis>fdis)
    		{fdis=dis;indx=i+1;
    			hf=left[i]; hr=right[i];
    		}
    	lsum+=left[i];
    	rsum+=right[i];
    }
    LL=lsum;
    RR=rsum;
    buty=abs(lsum-rsum);
    for(i=0;i<n;i++)
    {
    	lsum=LL;
    	rsum=RR;
    	lsum-=left[i];	rsum-=right[i];
    	lsum+=right[i];	rsum+=left[i];

    	nbuty=abs(lsum-rsum);

    	if(nbuty>buty)
    	{
    		buty=nbuty;
    		indx=i+1;
    		flag=true;
    	}
    }
    if(flag==true)
    	printf("%lld\n",indx);
    else
    	printf("0\n");

    return 0;
}
