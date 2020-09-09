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

bool used[150]={false};
int letter[150];
ll K;

//called with permutation(1,n);

void permutation(int at, int n)
{
	if(K<=0)
		return;
	if(at==n+1 && K)
	{
		for(int i=1;i<=n;i++)
			printf("%c",letter[i]);
		printf("\n");
		K--;
		return;
	}
	
	for(int i=1;i<=n;i++) if(used[i]==false)
	{
		used[i]= true;
		letter[at]=i+64;
		permutation(at+1,n);
		used[i]=false;
	}

}


int main()
{
	ll i,T,k=1,n,m,count=0;

	sl(T);

	while(T--)
	{
		sl(n);
		sl(K);
		permutation(1,n);
	}

	return 0;
}