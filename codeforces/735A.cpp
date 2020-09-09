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
    string s;

    sl(n);sl(k);
    cin>>s;
    //cout<<s;
    for(i=0;i<n;i++)
    {
    	if(s[i]=='G' || s[i]== 'T')
    		break;
    }
    for(i=i+k;i<n;i+=k)
    {
    	if(s[i]== '#')
    	{
    		cout<< "NO\n";
    		return 0;
    	}
    	if(s[i]== 'G' || s[i]== 'T')
    	{
    		cout<<"YES\n";
    		return 0;
    	}
    }
    cout<< "NO\n";


    return 0;
}