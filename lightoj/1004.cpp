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

ll kola[209][109];
ll agei_paichi[209][109];
ll n;

ll eto_kola_cahs_ken(ll i, ll j)
{
	if(kola[i][j]!= -1)
	{
		if(agei_paichi[i][j]!= -1)
			return agei_paichi[i][j];
		ll eto_gula_paichi=-822;
		if(i<n-1)
		{
			eto_gula_paichi= max(eto_gula_paichi, eto_kola_cahs_ken(i+1,j)+kola[i][j]);
			eto_gula_paichi=max(eto_gula_paichi,eto_kola_cahs_ken(i+1,j+1)+kola[i][j]);
			return agei_paichi[i][j]= eto_gula_paichi;
		}

		if(i>=n-1)
		{
			eto_gula_paichi= max(eto_gula_paichi, eto_kola_cahs_ken(i+1,j-1)+kola[i][j]);
			eto_gula_paichi=max(eto_gula_paichi,eto_kola_cahs_ken(i+1,j)+kola[i][j]);
			return agei_paichi[i][j]=eto_gula_paichi;
		}
	}
	else
		return 0;
}

int main()
{
    ll i,j,T,K=1,k,m,count=0;

    sl(T);

    while(T--)
    {
    	sl(n);
    	memset(kola, -1, sizeof(kola));
    	memset(agei_paichi, -1, sizeof(agei_paichi));
    	for(i=0;i<n;i++)
    		for(j=0;j<i+1;j++)
    			sl(kola[i][j]);
    	for(i=n,k=1;i<(2*n -1);i++,k++){
    		for(j=0;j<n-(k);j++)
    			sl(kola[i][j]);
    		//k++;
    	}
    	/*
    	for(i=0;i<n;i++){
    		for(j=0;j<i+1;j++)
    			cout<< kola[i][j]<< endl;
    		cout<<endl;
    	}
    	for(i=n,k=1;i<(2*n -1);i++,k++){
    		for(j=0;j<n-(k);j++)
    			cout<< kola[i][j]<< endl;
    		cout<<endl;
    		//k++;
    	}
		*/
    	//cout<< eto_kola_cahs_ken(0,0);
    	printf("Case %lld: %lld\n",K++, eto_kola_cahs_ken(0,0));
    }

    return 0;
}
