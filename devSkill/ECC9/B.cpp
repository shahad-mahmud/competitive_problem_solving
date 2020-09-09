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
    ll i,j,T,s,k=1,n,m,count=0;
    vector<ll> v;
    char S[100000];

    sl(T);

    while(T--)
    {
        v.clear();
    	sl(s);
    	while(s--)
    	{
            
    		ll num=0;
    		scanf(" %[^\n]s",S);
    		ll ln=strlen(S);
            //cout<< S<<endl;

    		for(i=0;i<ln;i++)
    		{
    			if(S[i]!=' ')
    				num= num*10 + S[i]-'0';

    			else
    			{
    				v.push_back(num);
    				num=0;
    			}
                //cout<<num<<" ";
    		}
    	}

    	sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
            cout<< v[i]<<endl;
        ll len=unique(v.begin(),v.end())-v.begin();
        //cout<< len<<endl;
        //for(i=0;i<v.size();i++)
           // cout<< v[i]<<endl;
    }

    return 0;
}