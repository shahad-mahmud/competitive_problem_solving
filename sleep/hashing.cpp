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

//******************************
string text, ptrn;

ll mod(ll a, ll b)
{
	return (a%b+b)%b;
}

ll hashing()
{
	ll n=text.length();
	ll m=ptrn.length();

	ll b=347;
	ll Mod=1000000007;

	if(n<m or n==0 or m==0)
		return -1;

	//calculate hash value of the pattern
	ll hp=0;
	for(ll i=0;i<m;i++)
		hp=mod(hp*b + ptrn[i],Mod);

	/*calculate the hash value of the first
	segment of the text of length m */
	ll ht=0;
	for(ll i=0;i<m;i++)
		ht=mod(ht*b + text[i],Mod);

	if(ht==hp)
		return 0; //returns the index of matching

	//now starts the "rolling hash" function.
	//the the hash value for next segment of length m will be chacked

	//here ((b^(m-1))%Mod) is calculated
	ll pwr=1;
	for(ll i=1;i<=m-1;i++)
		pwr=(pwr*b)%Mod;

	//rolling hash
	for(ll i=m;i<n;i++)
	{
		ht=mod(ht-mod(text[i-m]*pwr,Mod),Mod);
		ht=mod(ht*b,Mod);
		ht=mod(ht + text[i],Mod);

		if(ht==hp)
			return i-m+1; //returns the index of matching
	}

	return -1; //no matching found.
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;

    cin>> text>>ptrn;

    cout<< hashing();

    return 0;
}