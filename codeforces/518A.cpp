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

    for(i=s1.size()-1;s1[i]=='z';i--)
    	s1[i]='a';
    s1[i]++;

    cout<< (s1<s2?s1:"No such string")<<endl;

    return 0;
}