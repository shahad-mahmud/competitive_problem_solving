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
    ll i,j,T,k=1,n,m,count=0,indx,muhaha[30];
    string s;

    sl(n);
    cin>>s;

    for(i=0;i<30;i++)
    	muhaha[i]=0;

    for(i=0;i<n;i++)
    {
    	if(s[i]>96)
    		indx= s[i]-'a';
    	else
    		indx= s[i]-'A';

    	muhaha[indx]++;
    }

    for(i=0;i<26;i++)
    	if(muhaha[i]==0)
    	{
    		cout<< "NO\n";
    		return 0;
    	}

    cout<< "YES\n";

    return 0;
}