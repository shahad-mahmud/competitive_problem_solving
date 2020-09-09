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
    ll i,j,T,k=1,N,m,count=0;
    string s,t;

    cin>>s>>t;

    ll ln1=s.length();
    ll ln2=t.length();

    if(ln2>ln1)
    {
    	cout<< 0<<endl;
    	return 0;
    }

    for(i=0;i<ln1;i++)
    {
    	if(s.substr(i,ln2)==t)
    	{
    		count++;
    		i=i+ln2-1;
    	}
    }

    cout<<count<<endl;

    return 0;
}