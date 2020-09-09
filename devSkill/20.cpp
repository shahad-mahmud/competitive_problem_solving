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
    string s;

    ll cx,cy,px,py;
    double r,length;

    sl(T);

    while(T--)
    {
    	printf("Case %lld:",k++);
    	cin>>cx>>cy>>r>>px>>py;

    	length= sqrt((cx-px)*(cx-px) + (cy-py)*(cy-py));

    	//cout<<length<<endl;

    	cout<< (fabs(length-r)<=.0000001?" OnCircle\n": (length<r?" Inside\n":" Outside\n"));
    }

    return 0;
}