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

bool Ispalin(string s1)
{
	string s=s1;
	reverse(s.begin(),s.end());
	return (s==s1);
}

int main()
{
    ll i,j,T,k=1,n,m,count=0;
    string s;

    cin>>s;
    ll ln=s.length();

    for(char c='a'; c<='z';c++)
    {
    	for(i=0;i<=ln;i++)
    	{
    		string a=s;
    		string b="";
    		b+=c;
    		a.insert(i,b);

    		if(Ispalin(a))
    		{
    			cout<<a<<endl;
    			return 0;
    		}
    	}
    }

    cout<<"NA"<<endl;

    return 0;
}