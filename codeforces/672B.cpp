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
    ll i,j,T,k=1,ln,m,count=0;
    string s;
    ll a[30];

    for(i=0;i<30;i++)
    	a[i]=0;

    sl(ln);
    cin>>s;

    if(ln>26)
    {
    	cout<< -1<<endl;
    	return 0;
    }

    for(i=0;i<26 && i<ln;i++)
    	a[s[i]-'a']++;

    for(i=0;i<26;i++)
    {
    	if(a[i]>1)
    		count+=(a[i]-1);
    }

    cout<<count<<endl;

    return 0;
}