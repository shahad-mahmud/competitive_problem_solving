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
    ll i,j,T,k=1,n,m,count=0;
    string s,p;

    sl(T);

    while(T--)
    {
    	s.clear();
        //p.clear();
        ll num=0;
    	cin>>s;
    	ll ln=s.length();
    	ln;

        if(ln<5)
            for(i=0;i<ln;i++)
                num=num*10 + s[i]-'0';
        else    
        	for(i=ln-5;i<ln;i++)
        	{
        		num=num*10 + s[i]-'0';
            }

        //for(i=0;i<5;i++)
            

    	cout<<num<<endl;
    }

    return 0;
}