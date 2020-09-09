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

string s;

ll find(ll ln)
{
	ll mn=100000,i=0,count;
	ll B,u,l,b,a,s1,a1,u1,r;
	B=u=l=b=a=s1=a1=u1=r=0;

	for(i=0;i<ln;i++)
	{
		if(s[i]== 'B')
			B++;
		if(s[i]== 'u')
			u++;
		if(s[i]== 'l')
			l++;
		if(s[i]== 'b')
			b++;
		if(s[i]== 'a')
			a++;
		if(s[i]== 's')
			s1++;
		if(s[i]== 'r')
			r++;
	}

	mn=min(mn,min(B,min(l,min(b,min(s1,r)))));

	//cout<< mn<< endl;

	if(u>=2*mn && a>=2*mn)
		count= mn;
	else
	{
		u=min(u,a);
		u=(int)u/2;

		if(u<=mn)
			count=u;
	}

	return count;
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    cin>> s;

    cout<< find(s.length())<<endl;

    return 0;
}
