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
    string s1,s2;

    cin>>s1>>s2;

    reverse(s2.begin(),s2.end());
    //cout<<s2;

    if(s1==s2)
    	cout<< "YES\n";
    else
    	cout<< "NO\n";

    return 0;
}