#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
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

//#define pi 2*acos(0.0)

//*************************************
ll tem[100]={0};
string s,p;

void preFunc()
{
	ll indx,i;

	tem[0]=indx=0;

	ll ln=s.length();

	for(i=1;i<ln;i++)
	{
		if(p[i]==p[indx])
		{
			tem[i]=++indx;
			i++;
		}
		else
		{
			if(indx != 0 )
			{
				indx = tem[indx-1];
			}
			else
			{
				tem[i]=0;
				i++;
			}
		}
	}
	//return 0;
}

ll kmp()
{
	preFunc();

	ll i=0,j=0;

	ll ln1=s.length();
	ll ln2=p.length();

	while(i< ln1 && j< ln2)
	{
		if(s[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j!=0)
				j=tem[j-1];
			else
				i++;
		}
	}

	if(j == ln2)
		return 1;
	return 0;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    cin>> s>>p;

    
    //preFunc();
   
    cout<< kmp();;

    return 0;
}