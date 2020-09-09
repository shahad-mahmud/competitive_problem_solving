#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
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
    ll i,j,T,k=1,n,m,count=0;
    string s,t;
    map<string,string> mp;
    sl(n);

    while(n--)
    {
    	cin>>s>>t;

    	mp[t]=(mp[s]==""?s:mp[s]);
    	mp.erase(s);
    }

    cout<<mp.size()<<endl;

    for(auto i:mp)
    	cout<<i.second<<" "<<i.first<<endl;

    return 0;
}