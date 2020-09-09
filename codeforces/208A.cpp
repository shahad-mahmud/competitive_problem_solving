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
    ll i,j,T,k=1,n,m,count=0,f=0;
    string s1,s2;

    cin>>s1;

    ll ln=s1.length();

    for(i=0;i<ln;i++)
    {
    	if(s1[i]== 'W' && s1[i+1]=='U' && s1[i+2]=='B')
    	{
    		i=i+2;
    		if(f>0)
    			cout<<" ";
    	}
    	else
    	{
    		cout<<s1[i];
    		f++;
    	}
    }

    cout<<endl;

    return 0;
}