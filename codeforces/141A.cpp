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
    ll i,j,T,k=1,n,m,count=0,huh[30],hah[30];
    string s;

    for(i=0;i<30;i++)
	{
		huh[i]=0;
		hah[i]=0;
	}
    cin>>s;

    ll ln=s.length();

    for(i=0;i<ln;i++)
    {
    	huh[s[i]-'A']++;
    }

    cin>>s;

    ln=s.length();

    for(i=0;i<ln;i++)
    {
    	huh[s[i]-'A']++;
    }

    cin>>s;

    ln=s.length();

    for(i=0;i<ln;i++)
    {
    	hah[s[i]-'A']++;
    }

    for(i=0;i<26;i++)
    	if(huh[i]!=hah[i])
    	{
    		cout<< "NO\n";
    		return 0;
    	}

    cout<< "YES\n";

    return 0;
}