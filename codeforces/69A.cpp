#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <list>
#include <deque>
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
    ll i,j,T,k=1,n,m,count=0,x,y,z,X,Y,Z;

    x=y=z=0;

    sl(n);

    while(n--)
    {
    	sl(X); x+=X;
    	sl(Y); y+=Y;
    	sl(Z); z+=Z;
    }

    if(x==0 && y==0 && z==0)
    	cout<< "YES\n";
    else
    	cout<< "NO\n";

    return 0;
}
