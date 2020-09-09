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

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s[55],mrk[55];;

    s[0]="A";
    s[1]="B";

    sl(n); sl(k);

    for(i=1;i<=(n-k+1);i++)
    {
    	cin>>mrk[i];
    }

    for(i=1;i<=(n-k+1);i++)
    {
    	if(mrk[i]== "NO")
    	{
    		
    	}
    }




    return 0;
}