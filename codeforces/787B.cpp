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

vector<ll>v;

void split(char s[])
{
	ll ln= strlen(s),num=0,indx=0;

	for(ll i=0;i<ln;i++)
	{
		if(s[i]!=' ' && s[i]!='-')
			num= num*10+ s[i]-'0';
		else if(s[i]!='-')
		{
			v.push_back(num);
			num=0;
		}
	}

	v.push_back(num);
}


int main()
{
    ll i,j,T,k=0,n,m,count=0;
    //char s[100000];

    sl(n); sl(m);

    for(i=0;i<m;i++)
    {
    	char s[100000]="";
    	bool fl=false;
    	scanf(" %[^\n]s",s);
    	//cout<<s<<endl;
    	split(s);

    	ll lnn=v.size();

    	sort(v.begin(),v.end());
    	//cout<<lnn<<endl;
    	for(j=0;j<lnn-1;j++)
    	{
    		if((v[j]==v[j+1])&&fl==false)
    		{
    			k++;
    			fl=true;
    			//cout<<k;
    		}
    	}
    	v.clear();
    	//s="sha";
    }

    if(k==m)
    	cout<<"NO\n";
    else
    	cout<<"YES\n";

    return 0;
}