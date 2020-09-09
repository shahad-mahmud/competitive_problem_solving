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
    ll i,j=0,T,k=1,n,m,count=0;
    string s,s1[11],p;

    cin>>s;
    for(i=0;i<10;i++)
    	cin>>s1[i];

    
    //cout<<p;
    for(j=0;j<8;j++){
    	p=s.substr(0,10);
	    for(i=0;i<10;i++)
	    {
	    	if(p==s1[i])
	    	{
	    		cout<<i;
	    		//j++;
	    	}
	    }
	    //cout<<p<<endl<<s<<endl;
	    s.erase(0,10);
	}

    return 0;
}