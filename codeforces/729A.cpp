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

    sl(n);
    cin>>s;

    ll ln=s.length();

    for(i=0;i<ln;i++)
    {
    	if(s[i]=='o' && s[i+1]=='g' && s[i+2]=='o')
    	{
    		p+="***";
    		while(s[i+1]=='g' && s[i+2]=='o')
    		{
    			s[i]=s[i+1]=s[i+2]='*';
    			i=i+2;
    		}
    	}
    	else
    		p+=s[i];
    }

    cout<<p<<endl;

    return 0;
}