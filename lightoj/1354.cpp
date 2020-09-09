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

ll I=0,J=0;

ll binTOdeci(ll n)
{
	ll rem,num=0,i=0;
	while(n!=0)
	{
		rem=n%10;
		num=num + rem*pow(2,i);
		n/=10;
		i++;
	}

	return num;
}

ll find_bin1(string s)
{
	ll a=0,b;
	while(s[J]!= '.')
	{
		b=s[J]- '0';
		a=a*10 +b;
		J++;
	}
	J++;

	return binTOdeci(a);
}

ll find_bin2(string s, ll ln)
{
	ll a=0,b;
	while(J<ln)
	{
		b=s[J]- '0';
		a=a*10 +b;
		J++;
	}
	//j++;

	return binTOdeci(a);
}

ll find_a(string s)
{
	ll a=0,b;
	while(s[I]!='.')
	{
		b=s[I]- '0';
		a= a*10 + b;
		I++;
	}
    I++;

	return a;
}

ll find_b(string s)
{
	ll a=0,b;
	while(s[I]!='.')
	{
		b=s[I]- '0';
		a= a*10 + b;
		I++;
	}
	I++;

	return a;
}

ll find_c(string s)
{
	ll a=0,b;
	while(s[I]!='.')
	{
		b=s[I]- '0';
		a= a*10 + b;
		I++;
	}
    I++;

	return a;
}

ll find_d(string s, ll ln)
{
	ll a=0,b;
	while(I<ln)
	{
		b=s[I]- '0';
		a= a*10 + b;
		I++;
	}

	return a;
}

int main()
{
    ll i,T,k=1,n,m,count=0;
    string deci, bin;
    ll a,b,c,d;
    ll bin_a,bin_b,bin_c,bin_d;

    sl(T);

    while(T--)
    {
    	I=J=0;
    	cin>> deci>> bin;

	    a=find_a(deci);
	    b=find_b(deci);
	    c=find_c(deci);
	    d=find_d(deci, deci.size());

	    bin_a=find_bin1(bin);
	    bin_b=find_bin1(bin);
	    bin_c=find_bin1(bin);
	    bin_d=find_bin2(bin,bin.size());

	    //cout<<bin_a<<endl<<bin_b<<endl<<bin_c<<endl<<bin_d;
	    if(a==bin_a && b==bin_b && c==bin_c && d==bin_d)
	    	printf("Case %lld: Yes\n",k++);
	    else
	    	printf("Case %lld: No\n",k++);
	    deci="";
	    bin="";
    }

    return 0;
}
