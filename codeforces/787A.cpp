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
#define pb(x) push_back(x)

#define fr(a,b) for(i=a;i<b;i++)

#define pi  2*acos(0.0)

ll a,b,c,d;

#define f(x,y) (a*x-c*y+b-d)
#define df(y) ((d-b+c*y)/a)

int main()
{
    ll i,j,T,x=0,n,y,count1=0,cn2=0;
    string s;

    sl(a); sl(b);
    sl(c); sl(d);

    count1=b;
    cn2=d;

    while(x<100000)
    {
    	y=df(x);
    	if(f(y,x)==0)
    	{
    		cout<<y*a+b<<endl;
    		return 0;
    	}
    	x++;
    }

    cout<<-1<<endl;

    return 0;
}