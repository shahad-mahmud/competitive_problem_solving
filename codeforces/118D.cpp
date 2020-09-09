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
#define mod 100000000

ll dp[101][101][3][11];
ll K1,K2,n1,n2;

ll way(ll baki_n1,ll baki_n2,ll age_ki, ll age_kto, ll k1, ll k2)
{
	if(!baki_n1 && !baki_n2)
		return 1;
    
	if(dp[baki_n1][baki_n2][age_ki][age_kto] > -1)
		return dp[baki_n1][baki_n2][age_ki][age_kto];

	else
	{
		ll Count=0;

		if(age_ki==0)
		{
			if(baki_n2>0)
				Count+=way(baki_n1,baki_n2-1,1,1,k1,k2);

			if(age_kto<k1 && baki_n1>0)
				Count+=way(baki_n1-1, baki_n2, 0 , age_kto+1,k1,k2);
		}

		else
		{
			if(baki_n1>0)
				Count+=way(baki_n1-1,baki_n2,0,1,k1,k2);

			if(age_kto<k2 && baki_n2>0)
				Count+=way(baki_n1, baki_n2-1, 1 , age_kto+1,k1,k2);
		}

		dp[baki_n1][baki_n2][age_ki][age_kto] = (Count%mod);
		return  (Count%mod);
	}
}

int main()
{
    ll i,T,k=1,n,m,Count=0;
    //ll n1,n2;

    memset(dp, -1, sizeof(dp));

    sl(n1);
    sl(n2);
    sl(K1);
    sl(K2);

    cout<< way(n1,n2,0,0,K1,K2)<<endl;

    return 0;
}
